/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   print_x.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/05 22:02:41 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/10 14:22:27 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static	void	print_x_nomin_prec(uintmax_t nbr, int nbr_len, t_suitcase *s_c)
{
	if (s_c->is_precision && nbr && s_c->is_sharp)
	{
		s_c->ret += ft_putstr("0x");
		s_c->width--;
	}
	while (s_c->width > nbr_len && s_c->width > s_c->precision)
		s_c->ret += ft_putchar(' ') && s_c->width--;
	while (s_c->precision > nbr_len)
		s_c->ret += ft_putchar('0') && s_c->width-- && s_c->precision--;
	if (nbr && s_c->precision != 0)
	{
		s_c->ret += ft_putnbr_base(nbr, s_c->type == 'x' ? XLOW : XUPP, 16);
		s_c->width -= nbr_len;
	}
	while (s_c->width-- > 0)
		s_c->ret += ft_putchar(' ');
}

static	void	print_x_nominus(uintmax_t nbr, int nbr_len, t_suitcase *s_c)
{
	if (s_c->is_precision)
		print_x_nomin_prec(nbr, nbr_len, s_c);
	else
	{
		while (s_c->width-- > nbr_len)
			s_c->ret += s_c->is_zero ? ft_putchar('0') : ft_putchar(' ');
		if (s_c->is_sharp)
		{
			s_c->ret += ft_putstr("0x");
			s_c->width--;
		}
		s_c->ret += ft_putnbr_base(nbr, s_c->type == 'x' ? XLOW : XUPP, 16);
	}
}

static	void	print_x_minus(uintmax_t nbr, int nbr_len, t_suitcase *s_c)
{
	if (s_c->is_sharp)
	{
		s_c->ret += ft_putstr("0x");
		s_c->width--;
	}
	while (s_c->precision > nbr_len)
		s_c->ret += ft_putchar('0') && s_c->width-- && s_c->precision--;
	if (!s_c->precision && !nbr)
		s_c->width++;
	else
		s_c->ret += ft_putnbr_base(nbr, s_c->type == 'x' ? XLOW : XUPP, 16);
	s_c->width -= nbr_len;
	while (s_c->width-- > 0)
		s_c->ret += ft_putchar(' ');
}

void			print_x(va_list *ap, t_suitcase *s_c)
{
	uintmax_t	nbr;
	int			nbr_length;

	nbr = u_size(ap, s_c);
	nbr_length = nbrlen(nbr, 16);
	if (s_c->is_minus)
		print_x_minus(nbr, nbr_length, s_c);
	else
		print_x_nominus(nbr, nbr_length, s_c);
}
