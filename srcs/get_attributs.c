/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_attributs.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/04 14:02:33 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/11 18:30:04 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static	void	check_sizetype(t_suitcase *s_c)
{
	if (s_c->type == 'S')
		s_c->type = 's';
	else if (s_c->type == 'C')
		s_c->type = 'c';
	else if (s_c->type == 'D')
		s_c->type = 'd';
	else if (s_c->type == 'O')
		s_c->type = 'o';
	else if (s_c->type == 'U')
		s_c->type = 'u';
	else
		return ;
	s_c->size = 'l';
}

int				get_attributs(t_suitcase *s_c, const char *str)
{
	while (*str && !ft_strchr(TYPE, *str))
	{
		if (ft_strchr(FLAGS, *str))
			get_flag(s_c, *str);
		else if (ft_strchr(WIDTH, *str))
			get_width(s_c, str);
		else if (ft_strchr(SIZE, *str))
			get_size(s_c, str);
		else if (ft_strchr(PREC, *str))
			get_prec(s_c, str);
		else
			return (0);
		s_c->length += s_c->position;
		str += s_c->position;
		s_c->position = 0;
	}
	get_type(s_c, *str);
	check_sizetype(s_c);
	if (s_c->type)
		return (1);
	return (0);
}
