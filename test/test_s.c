/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   test_s.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/07 20:55:00 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/07 21:02:24 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	test_s()
{
	printf("printf	  : [%7.7s]\n", "nessim");
	ft_printf("ft_printf : [%7.7s]\n\n", "nessim");

	printf("printf	  : [%-7.7s]\n", "nessim");
	ft_printf("ft_printf : [%-7.7s]\n\n", "nessim");
	
}
