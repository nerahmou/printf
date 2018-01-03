/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   printf_s.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/03 14:09:07 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/03 17:18:13 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../libft/libft.h"

int		printf_i(va_list *ap, char c)
{
	long nbr;
	
	nbr = 0;
	if (c == 'd' || c == 'i')
		nbr = va_arg(*ap, int);
	else
		nbr = va_arg(*ap, long);
	ft_putnbr(nbr);
	return (ft_intlen(nbr, 10));
}
