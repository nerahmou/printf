/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   test_%.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerah%ou <%arvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/10 12:02:13 by nerah%ou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/10 13:35:46 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	test_m()
{
	printf("retour : %d\n",printf("[%-.%]"));
	printf("retour : %d\n\n",ft_printf("[%-.%]"));

	printf("retour : %d\n",printf("[%-#5.4%]"));
	printf("retour : %d\n\n",ft_printf("[%-#5.4%]"));

	printf("retour : %d\n",printf("[%-#%]"));
	printf("retour : %d\n\n",ft_printf("[%-#%]"));

	printf("retour : %d\n",printf("[%-2%]"));
	printf("retour : %d\n\n",ft_printf("[%-2%]"));

	printf("retour : %d\n",printf("[%-03%]"));
	printf("retour : %d\n\n",ft_printf("[%-03%]"));

	printf("retour : %d\n",printf("[%-5%]"));
	printf("retour : %d\n\n",ft_printf("[%-5%]"));

	printf("retour : %d\n",printf("[%-3.1%]"));
	printf("retour : %d\n\n",ft_printf("[%-3.1%]"));

	printf("retour : %d\n",printf("[%-3.5%]"));
	printf("retour : %d\n\n",ft_printf("[%-3.5%]"));

	printf("retour : %d\n",printf("[%-#3.%]"));
	printf("retour : %d\n\n",ft_printf("[%-#3.%]"));
	/*
	printf("[%-3.%]\n");
	ft_printf("[%-3.%]\n\n");
	
	printf("[%-+3.5%]\n");
	ft_printf("[%-+3.5%]\n\n");

	printf("[%-1%]\n");
	ft_printf("[%-1%]\n\n");

	printf("[%-5.%]\n");
	ft_printf("[%-5.%]\n\n");

	printf("[%-#5.4%]\n");
	ft_printf("[%-#5.4%]\n\n");

	printf("[%-#%]\n");
	ft_printf("[%-#%]\n\n");

	printf("[%-3%]\n");
	ft_printf("[%-3%]\n\n");

	printf("[%-03%]\n");
	ft_printf("[%-03%]\n\n");

	printf("[%-3.1%]\n");
	ft_printf("[%-3.1%]\n\n");

	printf("[%-3.5%]\n");
	ft_printf("[%-3.5%]\n");

	printf("[%.%]\n");
	ft_printf("[%.5%]\n\n");

	printf("[%#5.4%]\n");
	ft_printf("[%#5.4%]\n\n");

	printf("[%#%]\n");
	ft_printf("[%#%]\n\n");

	printf("[%2%]\n");
	ft_printf("[%2%]\n\n");

	printf("[%03%]\n");
	ft_printf("[%03%]\n\n");

	printf("[%5%]\n");
	ft_printf("[%5%]\n\n");

	printf("[%3.1%]\n");
	ft_printf("[%3.1%]\n\n");

	printf("[%3.5%]\n");
	ft_printf("[%3.5%]\n\n");

	printf("[%#3.%]\n");
	ft_printf("[%#3.%]\n\n");
	
	printf("[%3.%]\n");
	ft_printf("[%3.%]\n\n");
	
	printf("[%+3.5%]\n");
	ft_printf("[%+3.5%]\n\n");

	printf("[%1%]\n");
	ft_printf("[%1%]\n\n");

	printf("[%5.%]\n");
	ft_printf("[%5.%]\n\n");

	printf("[%#5.4%]\n");
	ft_printf("[%#5.4%]\n\n");

	printf("[%#%]\n");
	ft_printf("[%#%]\n\n");

	printf("[%3%]\n");
	ft_printf("[%3%]\n\n");

	printf("[%03%]\n");
	ft_printf("[%03%]\n\n");

	printf("[%3.1%]\n");
	ft_printf("[%3.1%]\n\n");

	printf("[%3.5%]\n");
	ft_printf("[%3.5%]\n");*/
}
