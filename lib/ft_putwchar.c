/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putwchar.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/03 19:15:51 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/04 11:26:36 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putwchar(wchar_t c)
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
	return (wcharlen(c));
}
