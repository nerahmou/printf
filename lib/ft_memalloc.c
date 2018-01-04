/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memalloc.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/29 13:50:43 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/03 19:43:21 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	*ft_memalloc(size_t size)
{
	void *tab;

	if (!(tab = malloc(size)))
		return (NULL);
	ft_bzero(tab, size);
	return (tab);
}
