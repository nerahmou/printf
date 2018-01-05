/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   print_c.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/05 22:03:16 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/06 00:00:23 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int		print_c_size(va_list *ap, t_suitcase *s_c)
{
	if (s_c->size == 'l' || s_c->type == 'C')
		ft_putwchar(va_arg(*ap, wint_t));
	else
		ft_putchar(va_arg(*ap, int));
	return (1);
}

int				print_c(va_list *ap, t_suitcase *s_c)
{
	if (s_c->width)
	{
		if (s_c->is_minus)
		{
			print_c_size(ap, s_c);
			while (--s_c->width)
				ft_putchar(' ');
		}
		else
		{
			while (--s_c->width)
				ft_putchar(' ');
			print_c_size(ap, s_c);
		}
	}
	else
		print_c_size(ap, s_c);
	return (0);
}
