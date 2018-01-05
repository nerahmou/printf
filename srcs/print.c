/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   print.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/05 20:06:46 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/05 23:59:48 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int		print(va_list *ap, t_suitcase *s_c)
{
	t_funptr	*tab[15];
	int			i;

	i = -1;
	if (!(init_funformat(tab)))
		return (-1);
	init_funptr(tab);
	while (++i < 15)
	{
		if (s_c->type == tab[i]->format)
		{
			(tab[i]->function)(ap, s_c);
			break ;
		}
	}
	free_funptr(tab);
	return (1);
}
