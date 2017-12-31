/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsplit.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/29 13:50:51 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/29 13:50:51 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int		ft_countwords(const char *s, char c)
{
	int	words;
	int i;

	i = 0;
	words = 0;
	while (*s)
	{
		while (*s && *s != c)
			s++;
		while (*s && *s == c)
			s++;
		words++;
	}
	return (words);
}

static void		ft_wordlen(char *tab, int *i, int *length, char c)
{
	while (tab[*i] && tab[*i] == c)
	{
		*i += 1;
		*length += 1;
	}
	while (tab[*length] && tab[*length] != c)
		*length += 1;
}

static char		*ft_tabtmp(char *tab, int *i, int *length)
{
	char	*tab_tmp;
	int		j;

	j = 0;
	if (!(tab_tmp = (char*)malloc(*length - *i + 1)))
		return (NULL);
	while (*i < *length)
	{
		tab_tmp[j] = tab[*i];
		j++;
		*i += 1;
	}
	tab_tmp[j] = 0;
	return (tab_tmp);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;
	char	*tab_nospace;
	int		i;
	int		j;
	int		length;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	length = 0;
	if (!(tab_nospace = ft_trimsplit(s, c)))
		return ((char**)ft_memalloc(sizeof(char*)));
	if (!(tab = (char**)malloc(sizeof(char*) *
					(ft_countwords(tab_nospace, c) + 1))))
		return (0);
	tab[ft_countwords(tab_nospace, c)] = 0;
	while (j < ft_countwords(tab_nospace, c))
	{
		ft_wordlen(tab_nospace, &i, &length, c);
		tab[j] = ft_tabtmp(tab_nospace, &i, &length);
		j++;
	}
	return (tab);
}
