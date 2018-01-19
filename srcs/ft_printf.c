/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/27 22:04:19 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/19 10:13:35 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static void	check_and_print(va_list *ap, const char **str, int *ret)
{
	t_suitcase	s_c;

	init_suitcase(&s_c);
	get_attributs(ap, &s_c, ++*str);
	if (s_c.type == 'n')
		get_ret_value(ap, &s_c, ret);
	else
		print(ap, &s_c);
	*str += s_c.length;
	*ret += s_c.ret;
}

int			ft_printf(const char *str, ...)
{
	va_list		ap;
	int			ret;

	ret = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str != '%' && *str != '{')
			ret += ft_putchar(*str++);
		else if (*str == '%')
			check_and_print(&ap, &str, &ret);
		else
			str += check_color_style(str, &ret);
	}
	va_end(ap);
	return (ret);
}
