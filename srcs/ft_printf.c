/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/27 22:04:19 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/11 20:10:40 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	check_and_print(va_list *ap, const char **str)
{
	t_suitcase	s_c;

	init_suitcase(&s_c);
	if (get_attributs(&s_c, ++*str))
	{
		print(ap, &s_c);
		*str += s_c.length;
		return (s_c.ret);
	}
	*str += s_c.length;
	return (0);
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
