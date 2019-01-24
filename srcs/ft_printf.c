/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/27 22:04:19 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/26 18:50:04 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	check_and_print(va_list *ap, const char **str, int *ret)
{
	t_suitcase	s_c;

	ft_memset(&s_c, 0, sizeof(t_suitcase));
	*str += get_attributs(ap, &s_c, ++*str);
	if (s_c.type == 'n')
		get_ret_value(ap, &s_c, ret);
	else if (!print(ap, &s_c))
		return (0);
	*str += s_c.length;
	*ret += s_c.ret;
	return (1);
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
		{
			if (!check_and_print(&ap, &str, &ret))
				return (-1);
		}
		else
			str += check_color_style(str, &ret);
	}
	va_end(ap);
	return (ret);
}
