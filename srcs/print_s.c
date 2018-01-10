/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   print_s.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/05 21:56:07 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/10 14:23:33 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static void		print_ws_minus(wchar_t *wstr, t_suitcase *s_c)
{
	if (s_c->is_precision)
	{
		while (*wstr && s_c->precision-- > 0)
		{
			s_c->ret += ft_putwchar(*wstr++);
			s_c->width--;
		}
		while (s_c->width-- > 0)
			s_c->ret += ft_putchar(' ');
	}
	else
	{
		while (*wstr)
		{
			s_c->ret += ft_putwchar(*wstr++);
			s_c->width--;
		}
		while (s_c->width-- > 0)
			s_c->ret += ft_putchar(' ');
	}
}

static	void	print_ws_nominus(wchar_t *wstr, t_suitcase *s_c)
{
	int length;

	length = ft_wstrlen(wstr);
	if (s_c->is_precision)
	{
		while (s_c->width-- > s_c->precision)
			s_c->ret += ft_putwchar(' ');
		while (s_c->precision-- > 0)
			s_c->ret += ft_putwchar(*wstr++);
	}
	else
	{
		while (s_c->width > length)
			s_c->ret += ft_putwchar(' ');
		while (*wstr)
			s_c->ret += ft_putwchar(*wstr++);
	}
}

static void		print_s_minus(char *str, t_suitcase *s_c)
{
	if (s_c->is_precision)
	{
		while (*str && s_c->precision-- > 0)
		{
			s_c->ret += ft_putchar(*str++);
			s_c->width--;
		}
		while (s_c->width-- > 0)
			s_c->ret += ft_putchar(' ');
	}
	else
	{
		while (*str)
		{
			s_c->ret += ft_putchar(*str++);
			s_c->width--;
		}
		while (s_c->width-- > 0)
			s_c->ret += ft_putchar(' ');
	}
}

static	void	print_s_nominus(char *str, t_suitcase *s_c)
{
	int length;

	length = ft_strlen(str);
	if (s_c->is_precision)
	{
		while (s_c->width > s_c->precision || s_c->width > length)
		{
			s_c->ret += s_c->is_zero ? ft_putchar('0') : ft_putchar(' ');
			s_c->width--;
		}
		while (*str && s_c->precision-- > 0)
			s_c->ret += ft_putchar(*str++);
	}
	else
	{
		while (s_c->width-- > length)
			s_c->ret += ft_putchar(' ');
		while (*str)
			s_c->ret += ft_putchar(*str++);
	}
}

void			print_s(va_list *ap, t_suitcase *s_c)
{
	if (s_c->is_minus)
	{
		if (s_c->size == 'l')
			print_ws_minus(va_arg(*ap, wchar_t *), s_c);
		else
			print_s_minus(va_arg(*ap, char *), s_c);
	}
	else
	{
		if (s_c->size == 'l')
			print_ws_nominus(va_arg(*ap, wchar_t *), s_c);
		else
			print_s_nominus(va_arg(*ap, char *), s_c);
	}
}
