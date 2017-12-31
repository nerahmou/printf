/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putchar.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/29 13:50:44 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/28 20:42:10 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(wchar_t c)
{
	if (c <= 0x7f)
		write(1, &c, 1);
	else if (c <= 0x7ff)
	{
		ft_putchar((char)(0xC0 | (c >> 6)));
		ft_putchar((char)((0x3f & c) | 0x80));
	}
	else if (c <= 0xffff)
	{
		ft_putchar((char)(0xE0 | (c >> 12)));
		ft_putchar((char)(((0x3f & (c >> 6))) | 0x80));
		ft_putchar((char)((0x3f & c) | 0x80));
	}
	else
	{
		ft_putchar((char)0xF0 | (c >> 18));
		ft_putchar((char)(((0x3f & (c >> 12))) | 0x80));
		ft_putchar((char)(((0x3f & (c >> 6))) | 0x80));
		ft_putchar((char)((0x3f & c) | 0x80));
	}
}
