/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_attributs.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/04 14:02:33 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/04 17:38:29 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	get_attributs(t_suitcase *s_c, const char *str)
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
			get_prec(s_c, ++str);
		else
			return (0);
		s_c->length += s_c->position;
		str += s_c->position;
		s_c->position = 0;
	}
	get_type(s_c, *str);
	if (s_c->is_type)
		return (1);
	return (0);
}
