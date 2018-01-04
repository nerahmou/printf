/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/27 22:04:19 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/04 17:54:49 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list		ap;
	t_suitcase	s_c;
	int			ret;

	ret = 0;
	init_suitcase(&s_c);
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%')
		{
			if (!get_attributs(&s_c, ++str))
				return (-1);
			ft_putstr(va_arg(ap, char *));
			str += s_c.length;
		}
		else
			ft_putchar(*str++);
	}
	va_end(ap);
	return (ret);
}
