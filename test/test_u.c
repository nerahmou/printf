/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   test_u.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/10 11:47:38 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/10 14:12:23 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	test_u()
{
	printf("[%-#5.4u]\n",50);
	ft_printf("[%-#5.4u]\n\n",50);

	printf("[%-#u]\n",50);
	ft_printf("[%-#u]\n\n",50);

	printf("[%-2u]\n",50);
	ft_printf("[%-2u]\n\n",50);

	printf("[%-03u]\n",50);
	ft_printf("[%-03u]\n\n",50);

	printf("[%-5u]\n",50);
	ft_printf("[%-5u]\n\n",50);

	printf("[%-3.1u]\n",50);
	ft_printf("[%-3.1u]\n\n",50);

	printf("[%-3.5u]\n",50);
	ft_printf("[%-3.5u]\n\n",50);

	printf("[%-3.u]\n",0);
	ft_printf("[%-3.u]\n\n",0);
	
	printf("[%-3.u]\n",0);
	ft_printf("[%-3.u]\n\n",0);
	
	printf("[%+-3.5u]\n",50);
	ft_printf("[%+-3.5u]\n\n",50);

	printf("[%-1u]\n",50);
	ft_printf("[%-1u]\n\n",50);

	printf("[%-5.u]\n",0);
	ft_printf("[%-5.u]\n\n",0);

	printf("[%-#5.4u]\n",-50);
	ft_printf("[%-#5.4u]\n\n",-50);

	printf("[%-#u]\n",-50);
	ft_printf("[%-#u]\n\n",-50);

	printf("[%-3u]\n",-50);
	ft_printf("[%-3u]\n\n",-50);

	printf("[%-03u]\n",-50);
	ft_printf("[%-03u]\n\n",-50);

	printf("[%-3.1u]\n",-50);
	ft_printf("[%-3.1u]\n\n",-50);

	printf("[%-3.5u]\n",-50);
	ft_printf("[%-3.5u]\n",-50);
	
	
	printf("[%#5.4u]\n",50);
	ft_printf("[%#5.4u]\n\n",50);

	printf("[%#u]\n",50);
	ft_printf("[%#u]\n\n",50);

	printf("[%2u]\n",50);
	ft_printf("[%2u]\n\n",50);

	printf("[%03u]\n",50);
	ft_printf("[%03u]\n\n",50);

	printf("[%5u]\n",50);
	ft_printf("[%5u]\n\n",50);

	printf("[%3.1u]\n",50);
	ft_printf("[%3.1u]\n\n",50);

	printf("[%3.5u]\n",50);
	ft_printf("[%3.5u]\n\n",50);

	printf("[%#3.u]\n",0);
	ft_printf("[%#3.u]\n\n",0);
	
	printf("[%3.u]\n",0);
	ft_printf("[%3.u]\n\n",0);
	
	printf("[%+3.5u]\n",50);
	ft_printf("[%+3.5u]\n\n",50);

	printf("[%1u]\n",50);
	ft_printf("[%1u]\n\n",50);

	printf("[%5.u]\n",0);
	ft_printf("[%5.u]\n\n",0);

	printf("[%#5.4u]\n",-50);
	ft_printf("[%#5.4u]\n\n",-50);

	printf("[%#u]\n",-50);
	ft_printf("[%#u]\n\n",-50);

	printf("[%3u]\n",-50);
	ft_printf("[%3u]\n\n",-50);

	printf("[%03u]\n",-50);
	ft_printf("[%03u]\n\n",-50);

	printf("[%3.1u]\n",-50);
	ft_printf("[%3.1u]\n\n",-50);

	printf("[%3.5u]\n",-50);
	ft_printf("[%3.5u]\n",-50);
}
