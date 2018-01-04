/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/29 13:50:40 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/03 19:37:56 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int		ft_atoi(const char *str)
{
	int sign;
	int output;

	output = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	sign = *str == '-' ? -1 : 1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
		output = (output * 10) + *str++ - '0';
	return (sign * output);
}
