/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/29 13:50:47 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/03 19:48:09 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*dup;

	dup = ft_strnew(ft_strlen(src));
	if (!dup)
		return (NULL);
	i = -1;
	while (src[++i])
		dup[i] = src[i];
	dup[i] = 0;
	return (dup);
}
