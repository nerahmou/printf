/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/11 19:16:25 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/16 00:07:24 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "include/ft_printf.h"
#include <locale.h>

int main(int argc, const char *argv[])
{
	setlocale(LC_ALL, "");
	//printf("**%d**",printf("%S", L"我是一只猫。"));
	//printf("**%d**",ft_printf("%S", L"我是一只猫。"));
//	printf("**%d**",printf("{%S}", NULL));
	//printf("**%d**",printf("{%-15p}", 0));
	printf("**%d**",printf("{%10Vi}"));
	printf("**%d**",ft_printf("{%10Vi}"));
}
