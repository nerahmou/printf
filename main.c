/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/15 20:58:30 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/24 11:04:12 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "include/ft_printf.h"
#include <locale.h>
#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	printf("{% 03d}\n", 0);
	ft_printf("{% 03d}\n", 0);
/*
	printf("Vrai printf : \n\n");
	printf("|%i|\n", -42);
	printf("|%1i|\n", -42);
	printf("|%2i|\n", -42);
	printf("|%.i|\n", -42);
	printf("|%.1i|\n", -42);
	printf("|%.2i|\n", -42);
	printf("|%1.i|\n", -42);
	printf("|%2.1i|\n", -42);
	printf("|%2.2i|\n", -42);
	printf("|%01i|\n", -42);
	printf("|%02.i|\n", -42);
	printf("|%02.1i|\n", -42);
	printf("|%02.2i|\n\n", -42);
	printf("|%+ i|\n", -42);
	printf("|%+ 1i|\n", -42);
	printf("|%+ 2i|\n", -42);
	printf("|%+ .i|\n", -42);
	printf("|%+ .1i|\n", -42);
	printf("|%.3i|\n", -42);
	printf("|%+ 1.i|\n", -42);
	printf("|%+ 2.1i|\n", -42);
	printf("|%+ 2.2i|\n", -42);
	printf("|%+ 01i|\n", -42);
	printf("|%+ 02i|\n", -42);
	printf("|%+ 02.1i|\n", -42);
	printf("|%+ 02.2i|\n\n", -42);

	
	printf("\n\nFt_printf : \n\n");
	
	ft_printf("|%i|\n", -42);
	ft_printf("|%1i|\n", -42);
	ft_printf("|%2i|\n", -42);
	ft_printf("|%.i|\n", -42);
	ft_printf("|%.1i|\n", -42);
	ft_printf("|%.2i|\n", -42);
	ft_printf("|%1.i|\n", -42);
	ft_printf("|%2.1i|\n", -42);
	ft_printf("|%2.2i|\n", -42);
	ft_printf("|%01i|\n", -42);
	ft_printf("|%02.i|\n", -42);
	ft_printf("|%02.1i|\n", -42);
	ft_printf("|%02.2i|\n\n", -42);
	ft_printf("|%+ i|\n", -42);
	ft_printf("|%+ 1i|\n", -42);
	ft_printf("|%+ 2i|\n", -42);
	ft_printf("|%+ .i|\n", -42);
	ft_printf("|%+ .1i|\n", -42);
	ft_printf("|%.3i|\n", -42);
	ft_printf("|%+ 1.i|\n", -42);
	ft_printf("|%+ 2.1i|\n", -42);
	ft_printf("|%+ 2.2i|\n", -42);
	ft_printf("|%+ 01i|\n", -42);
	ft_printf("|%+ 02i|\n", -42);
	ft_printf("|%+ 02.1i|\n", -42);
	ft_printf("|%+ 02.2i|\n\n", -42);
	
	printf("Vrai printf : \n\n");
	printf("|%i|\n", -42);
	printf("|%1i|\n", -42);
	printf("|%2i|\n", -42);
	printf("|%.i|\n", -42);
	printf("|%.1i|\n", -42);
	printf("|%.2i|\n", -42);
	printf("|%1.i|\n", -42);
	printf("|%2.1i|\n", -42);
	printf("|%2.2i|\n", -42);
	printf("|%3.2i|\n", -42);
	printf("|%01i|\n", -42);
	printf("|%02.i|\n", -42);
	printf("|%02.1i|\n", -42);
	printf("|%02.2i|\n\n", -42);
	printf("|%+ i|\n", -42);
	printf("|%+ 1i|\n", -42);
	printf("|%+ 2i|\n", -42);
	printf("|%+ .i|\n", -42);
	printf("|%+ .1i|\n", -42);
	printf("|%.3i|\n", -42);
	printf("|%+ 1.i|\n", -42);
	printf("|%+ 2.1i|\n", -42);
	printf("|%+ 2.2i|\n", -42);
	printf("|%+ 3.2i|\n", -42);
	printf("|%+ 2.3i|\n", -42);
	printf("|%+ 01i|\n", -42);
	printf("|%+ 02i|\n", -42);
	printf("|%+ 02.1i|\n", -42);
	printf("|%+ 02.2i|\n\n",-42 );

	
	printf("\n\nFt_printf : \n\n");
	ft_printf("|%i|\n", -42);
	ft_printf("|%1i|\n", -42);
	ft_printf("|%2i|\n", -42);
	ft_printf("|%.i|\n", -42);
	ft_printf("|%.1i|\n", -42);
	ft_printf("|%.2i|\n", -42);
	ft_printf("|%1.i|\n", -42);
	ft_printf("|%2.1i|\n", -42);
	ft_printf("|%2.2i|\n", -42);
	ft_printf("|%3.2i|\n", -42);
	ft_printf("|%01i|\n", -42);
	ft_printf("|%02.i|\n", -42);
	ft_printf("|%02.1i|\n", -42);
	ft_printf("|%02.2i|\n\n", -42);
	ft_printf("|%+ i|\n", -42);
	ft_printf("|%+ 1i|\n", -42);
	ft_printf("|%+ 2i|\n", -42);
	ft_printf("|%+ .i|\n", -42);
	ft_printf("|%+ .1i|\n", -42);
	ft_printf("|%.3i|\n", -42);
	ft_printf("|%+ 1.i|\n", -42);
	ft_printf("|%+ 2.1i|\n", -42);
	ft_printf("|%+ 2.2i|\n", -42);
	ft_printf("|%+ 3.2i|\n", -42);
	ft_printf("|%+ 2.3i|\n", -42);
	ft_printf("|%+ 01i|\n", -42);
	ft_printf("|%+ 02i|\n", -42);
	ft_printf("|%+ 02.1i|\n", -42);
	ft_printf("|%+ 02.2i|\n\n",-42 );
	
	printf("Vrai printf : \n\n");
	printf("|%-i|\n", -42);
	printf("|%-1i|\n", -42);
	printf("|%-2i|\n", -42);
	printf("|%-.i|\n", -42);
	printf("|%-.1i|\n", -42);
	printf("|%-.2i|\n", -42);
	printf("|%-1.i|\n", -42);
	printf("|%-2.1i|\n", -42);
	printf("|%-2.2i|\n", -42);
	printf("|%-01i|\n", -42);
	printf("|%-02.i|\n", -42);
	printf("|%-02.1i|\n", -42);
	printf("|%-02.2i|\n\n", -42);
	
	printf("|%-+ i|\n", -42);
	printf("|%-+ 1i|\n", -42);
	printf("|%-+ 2i|\n", -42);
	printf("|%-+ .i|\n", -42);
	printf("|%-+ .1i|\n", -42);
	printf("|%-.3i|\n", -42);
	printf("|%-+ 1.i|\n", -42);
	printf("|%-+ 2.1i|\n", -42);
	printf("|%-+ 2.2i|\n", -42);
	printf("|%-+ 01i|\n", -42);
	printf("|%-+ 02i|\n", -42);
	printf("|%-+ 5i|\n", -42);
	printf("|%-+ 02.1i|\n", -42);
	printf("|%-+ 02.2i|\n\n", -42);

	ft_printf("|%-i|\n", -42);
	ft_printf("|%-1i|\n", -42);
	ft_printf("|%-2i|\n", -42);
	ft_printf("|%-.i|\n", -42);
	ft_printf("|%-.1i|\n", -42);
	ft_printf("|%-.2i|\n", -42);
	ft_printf("|%-1.i|\n", -42);
	ft_printf("|%-2.1i|\n", -42);
	ft_printf("|%-2.2i|\n", -42);
	ft_printf("|%-01i|\n", -42);
	ft_printf("|%-02.i|\n", -42);
	ft_printf("|%-02.1i|\n", -42);
	ft_printf("|%-02.2i|\n\n", -42);

	ft_printf("|%-+ i|\n", -42);
	ft_printf("|%-+ 1i|\n", -42);
	ft_printf("|%-+ 2i|\n", -42);
	ft_printf("|%-+ .i|\n", -42);
	ft_printf("|%-+ .1i|\n", -42);
	ft_printf("|%-.3i|\n", -42);
	ft_printf("|%-+ 1.i|\n", -42);
	ft_printf("|%-+ 2.1i|\n", -42);
	ft_printf("|%-+ 2.2i|\n", -42);
	ft_printf("|%-+ 01i|\n", -42);
	ft_printf("|%-+ 02i|\n", -42);
	ft_printf("|%-+ 5i|\n", -42);
	ft_printf("|%-+ 02.1i|\n", -42);
	ft_printf("|%-+ 02.2i|\n\n", -42);
*/
	return 0;
}
