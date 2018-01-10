/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   check_attributs.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/04 16:19:08 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/08 17:34:15 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	get_flag(t_suitcase *s_c, char c)
{
	if (c == '#')
		s_c->is_sharp = 1;
	else if (c == '0')
		s_c->is_zero = 1;
	else if (c == '+')
		s_c->is_plus = 1;
	else if (c == '-')
		s_c->is_minus = 1;
	else
		s_c->is_space = 1;
	s_c->position++;
}

void	get_width(t_suitcase *s_c, const char *str)
{
	s_c->width = ft_atoi(str);
	s_c->position = nbrlen(s_c->width, 10);
}

void	get_size(t_suitcase *s_c, const char *str)
{
	if (*str == 'h')
	{
		if (*(str + 1) == 'h')
		{
			s_c->size = 'H';
			s_c->position++;
		}
		else
			s_c->size = 'h';
	}
	else if (*str == 'l')
		if (*(str + 1) == 'l')
		{
			s_c->size = 'L';
			s_c->position++;
		}
		else
			s_c->size = 'l';
	else if (*str == 'j')
		s_c->size = 'j';
	else
		s_c->size = 'z';
	s_c->position++;
}

void	get_prec(t_suitcase *s_c, const char *str)
{
	s_c->is_precision = 1;
	s_c->precision = ft_atoi(++str);
	if (s_c->precision == -1)
	{
		s_c->precision = 0;
		s_c->position = 1;
	}
	else
		s_c->position = nbrlen(s_c->precision, 10) + 1;
}

void	get_type(t_suitcase *s_c, char c)
{
	char *str;

	str = TYPE;
	s_c->length++;
	while (*str)
	{
		if (*str == c)
		{
			if (c == 'i')
				s_c->type = 'd';
			else
				s_c->type = *str;
			break ;
		}
		str++;
	}
}
