/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/27 22:04:19 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/31 18:46:33 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../libft/libft.h"

int	ft_printf(const char *str, ...)
{
	va_list ap;
	//int		ret;

	va_start(ap, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str == 's' || *str == 'S')
				ft_putstr(va_arg(ap, char *));
			else if (*str == 'p')
			{
			ft_putstr("0x");
			ft_putnbr_base(va_arg(ap, uintmax_t), "0123456789abcdef", 16);
			}
			else if (*str == 'd' || *str == 'i')
				ft_putnbr(va_arg(ap, int));
			else if (*str == 'D')
				ft_putnbr(va_arg(ap, long));
			else if (*str == 'o')
				ft_putstr(ft_itoa_base_low(va_arg(ap, int), 8));
			else if (*str == 'O')
				ft_putnbr_base(va_arg(ap, long), "01234567", 8);
			else if (*str == 'x')
				ft_putstr(ft_itoa_base_low(va_arg(ap, int), 16));
			else if (*str == 'X')
				ft_putstr(ft_itoa_base_upp(va_arg(ap, int), 16));
			else if (*str == 'c')
				ft_putchar(va_arg(ap, int));
			else if (*str == 'C')
				ft_putchar(va_arg(ap, wchar_t));
			else if (*str == 'u')
				ft_putnbr(va_arg(ap, unsigned int));
			else if (*str == 'U')
				ft_putnbr(va_arg(ap, unsigned long));
		}
		else
			ft_putchar(*str);
		str++;
	}
	va_end(ap);
	return (1);
}
