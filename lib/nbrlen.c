/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   nbrlen.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/04 14:29:45 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/04 14:30:59 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int		nbrlen(long n, int base)
{
	int length;

	length = 0;
	if (n <= 0)
		length++;
	n = ft_abs(n);
	while (n != 0)
	{
		length++;
		n = n / base;
	}
	return (length);
}
