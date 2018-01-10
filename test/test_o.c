/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   test_s.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/07 20:55:00 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/10 10:50:37 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	test_o()
{
	printf("[%#5.4o]\n",50);
	ft_printf("[%#5.4o]\n\n",50);

	printf("[%#o]\n",50);
	ft_printf("[%#o]\n\n",50);

	printf("[%2o]\n",50);
	ft_printf("[%2o]\n\n",50);

	printf("[%03o]\n",50);
	ft_printf("[%03o]\n\n",50);


	printf("[%3.1o]\n",50);
	ft_printf("[%3.1o]\n\n",50);

	printf("[%3.5o]\n",50);
	ft_printf("[%3.5o]\n\n",50);

	printf("[%3.o]\n",0);
	ft_printf("[%3.o]\n\n",0);
	
	printf("[%3.o]\n",0);
	ft_printf("[%3.o]\n\n",0);
	
	printf("[%+3.5o]\n",50);
	ft_printf("[%+3.5o]\n\n",50);

	printf("[%1o]\n",50);
	ft_printf("[%1o]\n\n",50);

	printf("[%5.o]\n",0);
	ft_printf("[%5.o]\n\n",0);

	printf("[%#5.4o]\n",-50);
	ft_printf("[%#5.4o]\n\n",-50);

	printf("[%#o]\n",-50);
	ft_printf("[%#o]\n\n",-50);

	printf("[%3o]\n",-50);
	ft_printf("[%3o]\n\n",-50);

	printf("[%03o]\n",-50);
	ft_printf("[%03o]\n\n",-50);

	printf("[%3.1o]\n",-50);
	ft_printf("[%3.1o]\n\n",-50);

	printf("[%3.5o]\n",-50);
	ft_printf("[%3.5o]\n\n",-50);

	printf("[%+3.5o]\n",-50);
	ft_printf("[%+3.5o]\n\n",-50);

	printf("[%1o]\n",-50);
	ft_printf("[%1o]\n\n",-50);

	printf("[%5.o]\n",0);
	ft_printf("[%5.o]\n\n",0);
/*
	
*/	
	
	
	
	printf("[%#-5.4o]\n",50);
	ft_printf("[%#-5.4o]\n\n",50);

	printf("[%-#o]\n",50);
	ft_printf("[%-#o]\n\n",50);

	printf("[%-3o]\n",50);
	ft_printf("[%-3o]\n\n",50);

	printf("[%-03o]\n",50);
	ft_printf("[%-03o]\n\n",50);

	printf("[%-3.1o]\n",50);
	ft_printf("[%-3.1o]\n\n",50);

	printf("[%-3.5o]\n",50);
	ft_printf("[%-3.5o]\n\n",50);

	printf("[%+-3.5o]\n",50);
	ft_printf("[%+-3.5o]\n\n",50);

	printf("[%-1o]\n",50);
	ft_printf("[%-1o]\n\n",50);

	printf("[%-5.o]\n",0);
	ft_printf("[%-5.o]\n\n",0);

	printf("[%#-5.4o]\n",-50);
	ft_printf("[%#-5.4o]\n\n",-50);

	printf("[%-#o]\n",-50);
	ft_printf("[%-#o]\n\n",-50);

	printf("[%-3o]\n",-50);
	ft_printf("[%-3o]\n\n",-50);

	printf("[%-03o]\n",-50);
	ft_printf("[%-03o]\n\n",-50);

	printf("[%-3.1o]\n",-50);
	ft_printf("[%-3.1o]\n\n",-50);

	printf("[%-3.5o]\n",-50);
	ft_printf("[%-3.5o]\n\n",-50);

	printf("[%+-3.5o]\n",-50);
	ft_printf("[%+-3.5o]\n\n",-50);

	printf("[%-1o]\n",-50);
	ft_printf("[%-1o]\n\n",-50);

	printf("[%-5.o]\n",0);
	ft_printf("[%-5.o]\n\n",0);

	

}
