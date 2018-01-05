/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   init_funptr.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/05 21:48:15 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/06 00:01:48 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int		init_funformat(t_funptr *tab[15])
{
	int		i;
	char	*str;

	i = -1;
	str = TYPE;
	while (++i < 15)
	{
		if (!(tab[i] = (t_funptr*)malloc(sizeof(t_funptr))))
			return (0);
		tab[i]->format = str[i];
	}
	return (1);
}

void	init_funptr(t_funptr *tab[15])
{
	tab[0]->function = &print_s;
	tab[1]->function = &print_s;
	tab[2]->function = &print_d;
	tab[3]->function = &print_d;
	tab[4]->function = &print_d;
	tab[5]->function = &print_o;
	tab[6]->function = &print_o;
	tab[7]->function = &print_u;
	tab[8]->function = &print_u;
	tab[9]->function = &print_x;
	tab[10]->function = &print_x;
	tab[11]->function = &print_c;
	tab[12]->function = &print_c;
	tab[13]->function = &print_p;
	tab[14]->function = &print_m;
}

void	free_funptr(t_funptr *tab[15])
{
	int i;

	i = -1;
	while (++i < 15)
		free(tab[i]);
}
