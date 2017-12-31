/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_display_elem_name.c                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/05 07:34:38 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/05 07:54:46 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdisplay_str(t_list *list)
{
	while (list)
	{
		ft_putchar('[');
		ft_putstr(list->content);
		ft_putchar(']');
		ft_putstr("-->");
		list = list->next;
	}
	ft_putstr("[NULL]");
	ft_putchar('\n');
}
