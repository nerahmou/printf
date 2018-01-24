/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/15 20:58:30 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/23 13:47:35 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "include/ft_printf.h"
#include <locale.h>
#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	int i =0;
	//printf("salut%*n\n", &i);
	ft_printf("salut {{bold}%-5b{eoc}\n", 5);
	
	printf("%d", i);
	return 0;
}
