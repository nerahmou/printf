/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   print_ws.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/17 16:41:59 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/17 16:56:31 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static void	print_ws_nominus_width(wchar_t *wstr, t_suitcase *s_c)
{
	while (s_c->width-- > s_c->prec)
		s_c->ret += s_c->is_zero ? ft_putchar('0') : ft_putchar(' ');
	while (s_c->prec > wcharlen(*wstr))
	{
		s_c->ret += s_c->is_zero ? ft_putchar('0') : ft_putchar(' ');
		s_c->prec--;
	}
	while (s_c->prec >= wcharlen(*wstr))
	{
		s_c->ret += ft_putwchar(*wstr);
		s_c->prec -= wcharlen(*wstr++);
	}
	while (s_c->prec-- > 0)
		s_c->ret += s_c->is_zero ? ft_putchar('0') : ft_putchar(' ');
}

void		print_ws_nominus(wchar_t *wstr, t_suitcase *s_c)
{
	int length;

	if (!wstr)
		print_s_nominus(NUL, s_c);
	else
	{
		length = ft_wstrlen(wstr);
		if (s_c->width > s_c->prec)
			print_ws_nominus_width(wstr, s_c);
		else if (s_c->is_precision)
			while (s_c->prec >= wcharlen(*wstr))
			{
				s_c->ret += ft_putwchar(*wstr);
				s_c->prec -= wcharlen(*wstr++);
			}
		else
		{
			while (s_c->width-- > length)
				s_c->ret += s_c->is_zero ? ft_putchar('0') : ft_putchar(' ');
			while (*wstr)
				s_c->ret += ft_putwchar(*wstr++);
		}
	}
}

void		print_ws_minus(wchar_t *wstr, t_suitcase *s_c)
{
	if (!wstr)
		print_s_minus(NUL, s_c);
	else
	{
		if (s_c->is_precision)
		{
			while (*wstr && s_c->prec-- > 0)
			{
				s_c->ret += ft_putwchar(*wstr++);
				s_c->width--;
			}
			while (s_c->width-- > 0)
				s_c->ret += ft_putchar(' ');
		}
		else
		{
			s_c->width -= ft_wstrlen(wstr);
			while (*wstr)
				s_c->ret += ft_putwchar(*wstr++);
			while (s_c->width-- > 0)
				s_c->ret += ft_putchar(' ');
		}
	}
}
