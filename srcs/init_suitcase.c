/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   init_suitcase.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/04 13:56:20 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/08 20:46:21 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	init_suitcase(t_suitcase *s_c)
{
	s_c->is_sharp = 0;
	s_c->is_zero = 0;
	s_c->is_minus = 0;
	s_c->is_plus = 0;
	s_c->is_space = 0;
	s_c->width = 0;
	s_c->is_precision = 0;
	s_c->precision = 0;
	s_c->size = 0;
	s_c->type = 0;
	s_c->length = 0;
	s_c->position = 0;
	s_c->ret = 0;
}
