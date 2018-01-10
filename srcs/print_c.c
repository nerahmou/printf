/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   print_c.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/05 22:03:16 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/10 13:41:47 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static void		print_c_size(va_list *ap, t_suitcase *s_c)
{
	if (s_c->size == 'l')
		s_c->ret += ft_putwchar(va_arg(*ap, wint_t));
	else
		s_c->ret += ft_putchar(va_arg(*ap, int));
}

void			print_c(va_list *ap, t_suitcase *s_c)
{
	if (s_c->width)
	{
		if (s_c->is_minus)
		{
			print_c_size(ap, s_c);
			while (--s_c->width)
				s_c->ret += ft_putchar(' ');
		}
		else
		{
			while (--s_c->width)
				s_c->ret += ft_putchar(' ');
			print_c_size(ap, s_c);
		}
	}
	else
		print_c_size(ap, s_c);
}
