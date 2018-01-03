/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/27 22:04:19 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/03 16:40:03 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../libft/libft.h"

int	ft_printf(const char *str, ...)
{
	va_list ap;
	int		ret;

	ret = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%')
			ret += check_type(&ap,*++str);
		else
			ret += ft_putchar(*str);
		str++;
	}
	va_end(ap);
	return (ret);
}
