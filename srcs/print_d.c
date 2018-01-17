/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   print_d.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/05 22:01:35 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/17 17:41:37 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static void		fill_plus_min(int is_neg, t_suitcase *s_c, int nb)
{
	if (is_neg)
	{
		s_c->ret += ft_putchar('-');
		s_c->width--;
	}
	else if (s_c->is_space || s_c->is_plus)
	{
		if (s_c->is_space && !s_c->prec && !s_c->is_plus)
			ft_putchar(' ');
		else if (s_c->is_plus)
			ft_putchar('+');
		else
			return ;
		s_c->ret++;
		s_c->width--;
	}
	else if (s_c->is_minus && s_c->is_zero && !nb)
		(s_c->ret += ft_putchar('0')) && s_c->width--;
}

static	void	print_no_mp(intmax_t nb, int nb_l, int is_neg, t_suitcase *s_c)
{
	if (s_c->is_zero)
	{
		fill_plus_min(is_neg, s_c, nb);
		s_c->width++;
	}
	while (s_c->width > nb_l + (is_neg || s_c->is_zero ||
				(s_c->is_plus && nb) ? 1 : 0))
	{
		s_c->ret += s_c->is_zero || (!nb && s_c->prec) ?
			ft_putchar('0') : ft_putchar(' ');
		s_c->width--;
	}
	if (!s_c->is_zero)
		fill_plus_min(is_neg, s_c, nb);
	if (!nb && s_c->is_precision && !s_c->prec)
		while (s_c->width-- > 0)
			s_c->ret += !nb && s_c->prec ? ft_putchar('0') : ft_putchar(' ');
	else
	{
		ft_putnbr_base(nb, DEC, 10);
		s_c->ret += nb_l;
	}
}

static	void	print_d_nom(intmax_t nb, int nb_l, int is_neg, t_suitcase *s_c)
{
	if (s_c->prec > nb_l)
	{
		while (s_c->width-- > s_c->prec + (s_c->is_plus || is_neg) ? 1 : 0)
			s_c->ret += ft_putchar(' ');
		fill_plus_min(is_neg, s_c, nb);
		while (s_c->prec > nb_l)
		{
			s_c->ret += ft_putchar('0');
			s_c->prec--;
		}
		ft_putnbr_base(nb, DEC, 10);
		s_c->ret += nbrlen(nb, 10);
	}
	else
		print_no_mp(nb, nb_l, is_neg, s_c);
}

static void		print_d_min(intmax_t nb, int nb_l, int is_neg, t_suitcase *s_c)
{
	fill_plus_min(is_neg, s_c, nb);
	while (s_c->prec > nb_l)
	{
		s_c->ret += ft_putchar('0');
		s_c->width--;
		s_c->prec--;
	}
	if (!s_c->prec && !nb)
		s_c->width++;
	else
		s_c->ret += ft_putnbr_base(nb, DEC, 10);
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
