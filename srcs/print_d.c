/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   print_d.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/05 22:01:35 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/10 13:49:14 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static void		fill_plus_min(int is_neg, t_suitcase *s_c)
{
	if (is_neg)
	{
		s_c->ret += ft_putchar('-');
		s_c->width--;
	}
	else if (s_c->is_space || s_c->is_plus)
	{
		s_c->ret += s_c->is_plus ? ft_putchar('+') : ft_putchar(' ');
		s_c->width--;
	}
}

static	void	print_d_nom(intmax_t nb, int nb_l, int is_neg, t_suitcase *s_c)
{
	if (s_c->precision > nb_l)
	{
		fill_plus_min(is_neg, s_c);
		while (s_c->precision > nb_l)
		{
			s_c->ret += ft_putchar('0');
			s_c->width--;
			s_c->precision--;
		}
		s_c->ret += ft_putnbr_base(nb, "0123456789", 10);
	}
	else
	{
		while (s_c->width > nb_l + (is_neg || (s_c->is_plus && nb) ? 1 : 0))
		{
			s_c->ret += ft_putchar(' ');
			s_c->width--;
		}
		fill_plus_min(is_neg, s_c);
		if (nb)
			s_c->ret += ft_putnbr_base(nb, "0123456789", 10);
	}
}

static void		print_d_min(intmax_t nb, int nb_l, int is_neg, t_suitcase *s_c)
{
	fill_plus_min(is_neg, s_c);
	while (s_c->precision > nb_l)
	{
		s_c->ret += ft_putchar('0');
		s_c->width--;
		s_c->precision--;
	}
	if (!s_c->precision && !nb)
		s_c->width++;
	else
		s_c->ret += ft_putnbr_base(nb, "0123456789", 10);
	s_c->width -= nb_l;
	while (s_c->width-- > 0)
		s_c->ret += ft_putchar(' ');
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
