/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_wstrlen.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/07 19:18:16 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/16 01:53:37 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"

size_t	ft_wstrlen(const wchar_t *wstr)
{
	size_t	length;

	length = 0;
	while (*wstr)
		length += wcharlen(*wstr++);
	return (length);
}
