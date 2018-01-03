/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   printf_s.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/03 14:09:07 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/03 16:29:47 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../libft/libft.h"

int		printf_c(va_list *ap, char c)
{
	if (c == 'c')
		return (ft_putchar(va_arg(*ap, int)));
	return (ft_putchar(va_arg(*ap, wchar_t)));
}
