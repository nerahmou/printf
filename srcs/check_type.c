/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   check_type.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/03 13:55:42 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/03 17:08:36 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../libft/libft.h"

int check_type(va_list *ap, char c)
{
	if (c == 's' || c == 'S')
		return (printf_s(ap, c));
	else if (c == 'p')
		return (printf_p(ap));
	else if (c == 'd' || c == 'D' || c == 'i')
		return (printf_i(ap, c));
	else if (c == 'o' || c == 'O')
		return (printf_o(ap, c));
	else if (c == 'u' || c == 'U')
		return (printf_u(ap, c));
	else if (c == 'x' || c == 'X')
		return (printf_x(ap, c));
	else if (c == 'c' || c == 'C')
		return (printf_c(ap, c));
	return (ft_putchar('%'));
}
