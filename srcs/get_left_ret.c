/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_left_ret.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/18 10:36:33 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/18 10:36:35 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void			get_left_ret(va_list *ap, t_suitcase *s_c, int *ret)
{
	if (!s_c->ret_nul)
		*va_arg(*ap, int *) = *ret;
}
