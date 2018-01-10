/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   print_m.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/05 22:04:00 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/10 13:29:40 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	print_m(t_suitcase *s_c)
{
	if (s_c->is_minus)
	{
		s_c->ret += ft_putchar('%');
		while (--s_c->width > 0)
			s_c->ret += ft_putchar(' ');
	}
	else
	{
		while (s_c->width-- > 1)
			s_c->ret += s_c->is_zero ? ft_putchar('0') : ft_putchar(' ');
		s_c->ret += ft_putchar('%');
	}
}
