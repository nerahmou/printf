/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   test_s.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/07 20:55:00 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/10 12:25:04 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	test_d()
{
	printf("[% +d]\n", 10);
	ft_printf("[% +d]\n\n", 10);
	
	printf("[%5.d]\n", -10);
	ft_printf("[%5.d]\n\n", -10);
	
	printf("[%+5.d]\n", 10);
	ft_printf("[%+5.d]\n\n", 10);
	
	printf("[%5.4d]\n", -10);
	ft_printf("[%5.4d]\n\n", -10);
	
	printf("[%+5.4d]\n", 10);
	ft_printf("[%+5.4d]\n\n", 10);
	
	printf("[%+5.d]\n", 0);
	ft_printf("[%+5.d]\n\n", 0);
	
	printf("[%5.d]\n", 10);
	ft_printf("[%5.d]\n\n", 10);

	printf("[%+5.d]\n", 10);
	ft_printf("[%+5.d]\n\n", 10);

	printf("[%+5.d]\n", 0);
	ft_printf("[%+5.d]\n\n", 0);

	printf("[%+5.d]\n", -1);
	ft_printf("[%+5.d]\n\n", -1);

	printf("[%+5.5d]\n", -1);
	ft_printf("[%+5.5d]\n\n", -1);

	printf("[%+.1d]\n", 10);
	ft_printf("[%+.1d]\n", 10);
	
	
	
	
		printf("[%-5.d]\n", -10);
	ft_printf("[%-5.d]\n\n", -10);
	
	printf("[%-5.d]\n", 10);
	ft_printf("[%-5.d]\n\n", 10);

	printf("[%+-5.d]\n", 10);
	ft_printf("[%+-5.d]\n\n", 10);

	printf("[%+-5.d]\n", 0);
	ft_printf("[%+-5.d]\n\n", 0);

	printf("[%+-5.d]\n", -1);
	ft_printf("[%+-5.d]\n\n", -1);

	printf("[%+-5.5d]\n", -1);
	ft_printf("[%+-5.5d]\n\n", -1);

	printf("[%+-.1d]\n", 10);
	ft_printf("[%+-.1d]\n\n", 10);
}
