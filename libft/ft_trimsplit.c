/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_trimsplit.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/29 13:50:52 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/29 13:50:52 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int		ft_nospaces(char s, char c)
{
	return (!(s == c));
}

static char		*ft_trims(const char *s, int length, char c)
{
	int		i;
	char	*tab;

	i = 0;
	while (!ft_nospaces(s[i], c))
		i++;
	while (!ft_nospaces(s[length - 1], c))
		length--;
	if (!(tab = ft_strnew(length - i)))
		return (NULL);
	ft_strncpy(tab, &s[i], length - i);
	return (tab);
}

char			*ft_trimsplit(const char *s, char c)
{
	int		length;
	char	*tab;

	length = ft_strlen(s);
	if (ft_nospaces(s[0], c) && ft_nospaces(s[length - 1], c))
	{
		if (!(tab = ft_strnew(length)))
			return (NULL);
		ft_strcpy(tab, s);
	}
	else
		tab = ft_trims(s, length, c);
	return (tab);
}
