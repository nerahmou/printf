/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   print_d.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/05 22:01:35 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/24 11:07:37 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static void	print_d_min(intmax_t nbr, int nbr_len, int is_neg, t_suitcase *s_c)
{
	if (s_c->is_plus || is_neg)
	{
		if (s_c->is_plus && !is_neg)
			s_c->ret += ft_putchar('+');
		else
			s_c->ret += ft_putchar('-');
		s_c->width--;
	}
	if (s_c->is_precision)
	{
		while (s_c->prec > nbr_len)
		{
			s_c->ret += ft_putchar('0');
			s_c->prec--;
			s_c->width--;
		}
		if (!s_c->prec && !nbr)
		{
			while (s_c->width-- > 0)
				s_c->ret += ft_putchar(' ');
		}
		else
		{
			ft_putnbr_base(nbr, DEC, 10);
			s_c->ret += nbr_len;
			s_c->width -= nbr_len;
			while (s_c->width-- > 0)
				s_c->ret += ft_putchar(' ');
		}
	}
	else
	{
		ft_putnbr_base(nbr, DEC, 10);
		s_c->ret += nbr_len;
		s_c->width -= nbr_len;
		while (s_c->width-- > 0)
			s_c->ret += ft_putchar(' ');
	}
}

static void	print_d_nom(intmax_t nbr, int nbr_len, int is_neg, t_suitcase *s_c)
{
	if (s_c->is_space && !s_c->is_plus && !is_neg)
	{
		s_c->ret += ft_putchar(' ');
		is_neg = 0;
		s_c->width--;
	}
	if (s_c->is_plus && !is_neg && s_c->prec <= nbr_len)
	{
		s_c->ret += ft_putchar('+');
		s_c->width--;
		s_c->is_plus = 0;
	}
	if (s_c->is_precision)
	{	
		while (s_c->width > s_c->prec + (is_neg || s_c->is_plus) && s_c->width > nbr_len + (is_neg || s_c->is_plus))
		{
			s_c->ret += ft_putchar(' ');
			s_c->width--;
		}
		if (!s_c->prec && !nbr)
		{
			while (s_c->width-- > 0)
				s_c->ret += ft_putchar(' ');
		}
		else
		{
			if (s_c->is_plus || is_neg)
			{
				if (s_c->is_plus && !is_neg)
					s_c->ret += ft_putchar('+');
				else
					s_c->ret += ft_putchar('-');
				s_c->width--;
			}
			while (s_c->prec-- > nbr_len)
			{
				s_c->ret += ft_putchar('0');

			}
			ft_putnbr_base(nbr, DEC, 10);
			s_c->ret += nbr_len;
		}
	}
	else
	{
		if (is_neg && s_c->is_zero && s_c->width > nbr_len)
		{
			s_c->ret += ft_putchar('-');
			s_c->width--;
			is_neg = 0;
		}
		while (s_c->width > nbr_len + is_neg)
		{
			s_c->ret += s_c->is_zero ? ft_putchar('0') : ft_putchar(' ');
			s_c->width--;
		}
		if (is_neg)
			s_c->ret += ft_putchar('-');
		ft_putnbr_base(nbr, DEC, 10);
		s_c->ret += nbr_len;
	}
}

void			print_d(va_list *ap, t_suitcase *s_c)
{
	intmax_t	nbr;
	int			nbr_length;
	int			is_neg;

	nbr = d_size(ap, s_c);
	is_neg = nbr < 0 ? 1 : 0;
	nbr = nbr < 0 ? -nbr : nbr;
	nbr_length = nbrlen(nbr, 10);
	if (s_c->is_minus)
		print_d_min(nbr, nbr_length, is_neg, s_c);
	else
		print_d_nom(nbr, nbr_length, is_neg, s_c);
}
