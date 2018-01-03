/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putchar.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/29 13:50:44 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/03 13:50:57 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int	ft_putchar(wchar_t c)
{
	int ret;

	ret = 1;
	if (c <= 0x7f)
		write(1, &c, 1);
	else if (c <= 0x7ff)
	{
		ret = 2;
		ft_putchar((char)(0xC0 | (c >> 6)));
		ft_putchar((char)((0x3f & c) | 0x80));
	}
	else if (c <= 0xffff)
	{
		ret = 3;
		ft_putchar((char)(0xE0 | (c >> 12)));
		ft_putchar((char)(((0x3f & (c >> 6))) | 0x80));
		ft_putchar((char)((0x3f & c) | 0x80));
	}
	else
	{
		ret = 4;
		ft_putchar((char)0xF0 | (c >> 18));
		ft_putchar((char)(((0x3f & (c >> 12))) | 0x80));
		ft_putchar((char)(((0x3f & (c >> 6))) | 0x80));
		ft_putchar((char)((0x3f & c) | 0x80));
	}
	return (ret);
}
