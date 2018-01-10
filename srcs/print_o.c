/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   print_o.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/05 22:01:51 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/10 14:22:56 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static	void	print_o_nomin_prec(uintmax_t nbr, int nbr_len, t_suitcase *s_c)
{
	if (nbr_len > s_c->width && s_c->is_sharp)
		s_c->ret += ft_putchar('0');
	while (s_c->width > nbr_len && s_c->width > s_c->precision)
		s_c->ret = ft_putchar(' ') && s_c->width--;
	while (s_c->precision > nbr_len)
		s_c->ret = ft_putchar('0') && s_c->width-- && s_c->precision--;
	if (nbr && s_c->precision != 0)
		s_c->ret = ft_putnbr_base(nbr, OCT, 8) &&
			(s_c->width -= nbr_len);
	while (s_c->width-- > 0)
	{
		if (s_c->width == 0 && s_c->is_sharp)
			s_c->ret += ft_putchar('0');
		else
			s_c->ret += ft_putchar(' ');
	}
}

static	void	print_o_nominus(uintmax_t nbr, int nbr_len, t_suitcase *s_c)
{
	if (s_c->is_precision)
		print_o_nomin_prec(nbr, nbr_len, s_c);
	else
	{
		while (s_c->width-- > nbr_len)
		{
			if (s_c->is_zero)
				s_c->ret += ft_putchar('0');
			else
				s_c->ret += ft_putchar(' ');
		}
		if (s_c->is_sharp)
			s_c->ret += ft_putchar('0') && s_c->width--;
		s_c->ret += ft_putnbr_base(nbr, OCT, 8) && (s_c->width -= nbr_len);
	}
}

static	void	print_o_minus(uintmax_t nbr, int nbr_len, t_suitcase *s_c)
{
	if (s_c->is_sharp)
		s_c->ret += ft_putchar('0') && s_c->width-- && s_c->precision--;
	while (s_c->precision > nbr_len)
		s_c->ret += ft_putchar('0') && s_c->width-- && s_c->precision--;
	if (!s_c->precision && !nbr)
		s_c->width++;
	else
		s_c->ret += ft_putnbr_base(nbr, OCT, 8);
	s_c->width -= nbr_len;
	while (s_c->width-- > 0)
		s_c->ret += ft_putchar(' ');
}

void			print_o(va_list *ap, t_suitcase *s_c)
{
	uintmax_t	nbr;
	int			nbr_length;

	nbr = u_size(ap, s_c);
	nbr_length = nbrlen(nbr, 8);
	if (s_c->is_minus)
		print_o_minus(nbr, nbr_length, s_c);
	else
		print_o_nominus(nbr, nbr_length, s_c);
}
