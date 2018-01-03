/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/29 16:19:37 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/03 17:37:34 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../libft/libft.h"
#include "limits.h"

int main()
{
	//ft_printf("%D", -60);
	//printf("\n%d",printf("Je m'appel %s et j'ai %p ans","nessim", "s"));
	printf("\n%d",printf("Je m'appel %S et j'ai %p ans","nessim", "s"));
	//printf("%d",printf("%o", 2147483647));
	//printf("\nret %d",printf("%o", -5));
	
	
	
	
	/*	
		printf("%d",printf("%ls", "salutę"));
		ft_printf("ft_printf : [s] %S\n\n","salutę");
		printf("printf : [D] %D\n", 42);
		ft_printf("ft_printf : [D] %D\n\n", 42);

		printf("printf : [p] %p\n", "salut");
		ft_printf("ft_printf : [p] %p\n\n", "salut");

		printf("printf : [d] %d\n", 150);
		ft_printf("ft_printf : [d] %d\n\n", 150);

		printf("printf : [o] %o\n", 150);
		ft_printf("ft_printf : [o] %o\n\n", 150);

		printf("printf : [x] %x\n", 185);
		ft_printf("ft_printf : [x] %x\n\n", 185);

		printf("printf : [X] %X\n", 185);
		ft_printf("ft_printf : [X] %X\n\n", 185);

		printf("printf : [c] %c\n", 150);
		ft_printf("ft_printf : [c] %c\n\n", 150);
		*/	return 0;
}
