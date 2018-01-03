/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   printf_s.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/03 14:09:07 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/03 16:59:42 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../libft/libft.h"

int		printf_p(va_list *ap)
{
	int ret;

	ret = 0;
	ft_putstr("0x");
	ret += ft_putnbr_base(va_arg(*ap, uintmax_t), "0123456789abcdef", 16);
	return (ret + 2);
}
