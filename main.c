/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/15 20:58:30 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/20 14:29:17 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "include/ft_printf.h"
#include <locale.h>
#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	//setlocale(LC_ALL,"");
	//printf("%5lc", 350);
	printf("%d",printf("%#2o",0));
	printf("\n");
	printf("%d",ft_printf("%#2o",0));
	/*printf("%d",printf("t%04.2o%#2oet %#-8.3o titi", 0, 0, 0));
	printf("\n");
	printf("%d",ft_printf("t%04.2o%#2oet %#-8.3o titi", 0, 0, 0));
	*/return 0;
}
