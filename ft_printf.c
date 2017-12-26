/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/24 12:25:34 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/26 23:39:23 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_type(char c, va_list ap)
{
	if (c == 'o' || c == 'u' || c == 'x' || c == 'X')
		return (ft_print_int_base(va_arg(ap, int)), c);
	else if (c == 'd' || c == 'i')
		return (ft_print_int(va_arg(ap, int)));
	else if (c == 's')
		return (ft_print_s(va_arg(ap, char *)));
	else if (c == 'c')
		ft_putchar(va_arg(ap, int));
	else
		ft_putchar(c);
	return (1);
}

int	ft_printf(const char *str, ...)
{
	va_list ap;
	int		char_nbr;

	char_nbr = 0;
	va_start (ap, str);
	while (*str)
	{
		if (*str == '%')
			char_nbr += check_type(*++str, ap);
		else
		{
			ft_putchar(*str);
			char_nbr++;
		}
		str++;
	}
	va_end(ap);
	return (char_nbr);
}

int main(int argc, const char *argv[])
{
	char c = 'A';
	int  d = 120;
	char *s = "nessim";

	ft_putnbr(ft_printf("salut %d\n", d));
	ft_putnbr(ft_printf("salut %s\n", s));
	return 0;
}
