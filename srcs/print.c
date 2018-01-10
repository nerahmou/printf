/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   print.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/05 20:06:46 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/10 12:10:45 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int		print(va_list *ap, t_suitcase *s_c)
{
	if (s_c->type == 'd')
		return (print_d(ap, s_c));
	else if (s_c->type == 'o')
		return (print_o(ap, s_c));
	else if (s_c->type == 'u')
		return (print_u(ap, s_c));
	else if (s_c->type == 'x' || s_c->type == 'X')
		return (print_x(ap, s_c));
	else if (s_c->type == 'p')
		return (print_p(ap, s_c));
	else if (s_c->type == 'c')
		return (print_c(ap, s_c));
	else if (s_c->type == 's')
		return (print_s(ap, s_c));
	else
		return (print_m(s_c));
}
