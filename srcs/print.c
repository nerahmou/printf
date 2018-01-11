/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   print.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/05 20:06:46 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/10 14:28:19 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	print(va_list *ap, t_suitcase *s_c)
{
	if (s_c->type == 'd')
		print_d(ap, s_c);
	else if (s_c->type == 'o')
		print_o(ap, s_c);
	else if (s_c->type == 'u')
		print_u(ap, s_c);
	else if (s_c->type == 'x' || s_c->type == 'X')
		print_x(ap, s_c);
	else if (s_c->type == 'p')
		print_p(ap, s_c);
	else if (s_c->type == 'c')
		print_c(ap, s_c);
	else if (s_c->type == 's')
		print_s(ap, s_c);
	else
		print_m(s_c);
}
