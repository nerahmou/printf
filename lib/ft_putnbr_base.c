/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr_base.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/30 16:18:30 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/15 21:14:44 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putnbr_base(uintmax_t nbr, char *base, size_t baselen)
{
	static int i = 0;

	if (nbr >= baselen)
	{
		ft_putnbr_base(nbr / baselen, base, baselen);
		ft_putnbr_base(nbr % baselen, base, baselen);
	}
	else
	{
		i++;
		ft_putchar(base[nbr]);
	}
	return (i);
}
