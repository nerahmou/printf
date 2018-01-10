/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   test_s.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/07 20:55:00 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/08 20:03:40 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	test_p()
{
	
	printf("[%-p]\n", "ss");
	ft_printf("[%-p]\n", "ss");
	
	printf("[%-20p]\n", "ss");
	ft_printf("[%-20p]\n", "ss");
	
	printf("[%-020p]\n", "ss");
	ft_printf("[%-020p]\n", "ss");
	
	printf("[%-20p]\n", "ss");
	ft_printf("[%-20p]\n", "ss");
	
	printf("[%-20.12p]\n", "ss");
	ft_printf("[%-20.12p]\n", "ss");
	
	printf("[%- 20.12p]\n", "ss");
	ft_printf("[%- 20.12p]\n", "ss");
	
	printf("[%p]\n", "ss");
	ft_printf("[%p]\n", "ss");
	
	printf("[%20p]\n", "ss");
	ft_printf("[%20p]\n", "ss");
	
	printf("[%020p]\n", "ss");
	ft_printf("[%020p]\n", "ss");
	
	printf("[%20p]\n", "ss");
	ft_printf("[%20p]\n", "ss");
	
	printf("[%20.12p]\n", "ss");
	ft_printf("[%20.12p]\n", "ss");
	
	printf("[% 20.12p]\n", "ss");
	ft_printf("[% 20.12p]\n", "ss");
}
