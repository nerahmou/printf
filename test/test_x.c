/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   test_x.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmxu <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/10 11:08:45 by nerahmxu     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/10 14:24:50 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	test_x()
{
	printf("[%-#5.4x]\n",50);
	ft_printf("[%-#5.4x]\n\n",50);

	printf("[%-#x]\n",50);
	ft_printf("[%-#x]\n\n",50);

	printf("[%-2x]\n",50);
	ft_printf("[%-2x]\n\n",50);

	printf("[%-03x]\n",50);
	ft_printf("[%-03x]\n\n",50);

	printf("[%-5x]\n",50);
	ft_printf("[%-5x]\n\n",50);

	printf("[%-3.1x]\n",50);
	ft_printf("[%-3.1x]\n\n",50);

	printf("[%-3.5x]\n",50);
	ft_printf("[%-3.5x]\n\n",50);

	printf("[%-3.x]\n",0);
	ft_printf("[%-3.x]\n\n",0);
	
	printf("[%-3.x]\n",0);
	ft_printf("[%-3.x]\n\n",0);
	
	printf("[%+-3.5x]\n",50);
	ft_printf("[%+-3.5x]\n\n",50);

	printf("[%-1x]\n",50);
	ft_printf("[%-1x]\n\n",50);

	printf("[%-5.x]\n",0);
	ft_printf("[%-5.x]\n\n",0);

	printf("[%-#5.4x]\n",-50);
	ft_printf("[%-#5.4x]\n\n",-50);

	printf("[%-#x]\n",-50);
	ft_printf("[%-#x]\n\n",-50);

	printf("[%-3x]\n",-50);
	ft_printf("[%-3x]\n\n",-50);

	printf("[%-03x]\n",-50);
	ft_printf("[%-03x]\n\n",-50);

	printf("[%-3.1x]\n",-50);
	ft_printf("[%-3.1x]\n\n",-50);

	printf("[%-3.5x]\n",-50);
	ft_printf("[%-3.5x]\n",-50);
	
	
	printf("[%#5.4x]\n",50);
	ft_printf("[%#5.4x]\n\n",50);

	printf("[%#x]\n",50);
	ft_printf("[%#x]\n\n",50);

	printf("[%2x]\n",50);
	ft_printf("[%2x]\n\n",50);

	printf("[%03x]\n",50);
	ft_printf("[%03x]\n\n",50);

	printf("[%5x]\n",50);
	ft_printf("[%5x]\n\n",50);

	printf("[%3.1x]\n",50);
	ft_printf("[%3.1x]\n\n",50);

	printf("[%3.5x]\n",50);
	ft_printf("[%3.5x]\n\n",50);

	printf("[%#3.x]\n",0);
	ft_printf("[%#3.x]\n\n",0);
	
	printf("[%8x]\n",5);
	ft_printf("[%8x]\n\n",5);
	
	printf("[%+3.5x]\n",50);
	ft_printf("[%+3.5x]\n\n",50);

	printf("[%1x]\n",50);
	ft_printf("[%1x]\n\n",50);

	printf("[%5.x]\n",0);
	ft_printf("[%5.x]\n\n",0);

	printf("[%#5.4x]\n",-50);
	ft_printf("[%#5.4x]\n\n",-50);

	printf("[%#x]\n",-50);
	ft_printf("[%#x]\n\n",-50);

	printf("[%3x]\n",-50);
	ft_printf("[%3x]\n\n",-50);

	printf("[%03x]\n",-50);
	ft_printf("[%03x]\n\n",-50);

	printf("[%3.1x]\n",-50);
	ft_printf("[%3.1x]\n\n",-50);

	printf("[%3.5x]\n",-50);
	ft_printf("[%3.5x]\n",-50);
}
