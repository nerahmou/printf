/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   printf_o.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/03 16:16:44 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/03 17:03:55 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../libft/libft.h"

int		printf_u(va_list *ap, char c)
{
	int ret;

	ret = 0;
	if (c == 'u')
		ret += ft_putnbr_base(va_arg(*ap, unsigned int), "0123456789", 10);
	else
		ret += ft_putnbr_base(va_arg(*ap, unsigned long), "0123456789", 10);
	return (ret);
}
