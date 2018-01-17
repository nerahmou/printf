/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/27 22:04:19 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/17 17:40:43 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	check_and_print(va_list *ap, const char **str)
{
	t_suitcase	s_c;

	init_suitcase(&s_c);
	get_attributs(ap, &s_c, ++*str);
	print(ap, &s_c);
	*str += s_c.length;
	return (s_c.ret);
}

int			ft_printf(const char *str, ...)
{
	va_list		ap;
	int			ret;

	ret = 0;
	va_start(ap, str);
	while (*str)
	{
		while (*str && *str != '%')
			ret += ft_putchar(*str++);
		if (*str == '%')
			ret += check_and_print(&ap, &str);
	}
	va_end(ap);
	return (ret);
}
