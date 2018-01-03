/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr_base.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/30 16:18:30 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/03 17:16:33 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int   ft_putnbr_base(uintmax_t nbr, char *base, size_t baselen)
{
	static int ret = 0;

	if (nbr >= baselen)
	{
		ft_putnbr_base(nbr / baselen, base, baselen);
		ft_putnbr_base(nbr % baselen, base, baselen);
	}
	else
	{
		ret++;
		ft_putchar(base[nbr]);
	}
	return (ret);
}
