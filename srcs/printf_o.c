/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   printf_o.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/03 16:16:44 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/03 17:02:10 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../libft/libft.h"

int		printf_o(va_list *ap, char c)
{
	int ret;

	ret = 0;
	if (c == 'o')
		ret += ft_putnbr_base(va_arg(*ap, unsigned int), "01234567", 8);
	else
		ret += ft_putnbr_base(va_arg(*ap, unsigned long), "01234567", 8);
	return (ret);
}
