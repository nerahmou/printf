/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   printf_o.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/03 16:16:44 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/03 16:58:02 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../libft/libft.h"

int		printf_x(va_list *ap, char c)
{
	int ret;

	ret = 0;
	if (c == 'x')
		ret += ft_putnbr_base(va_arg(*ap, unsigned int), "0123456789abcdef", 16);
	else
		ret += ft_putnbr_base(va_arg(*ap, unsigned int), "0123456789ABCDEF", 16);
	return (ret);
}
