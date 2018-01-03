/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   printf_s.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/03 14:09:07 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/03 16:30:03 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../libft/libft.h"

int		printf_s(va_list *ap, char c)
{
	if (c == 's')
		return (ft_putstr(va_arg(*ap, char *)));
	return (ft_putwstr(va_arg(*ap, wchar_t *)));
}
