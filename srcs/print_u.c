/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   print_u.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/05 22:02:23 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/10 14:23:15 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static	void	print_u_nomin_prec(uintmax_t nbr, int nbr_len, t_suitcase *s_c)
{
	while (s_c->width > nbr_len && s_c->width > s_c->precision)
		s_c->ret += ft_putchar(' ') && s_c->width--;
	while (s_c->precision > nbr_len)
		s_c->ret += ft_putchar('0') && s_c->width-- && s_c->precision--;
	if (nbr && s_c->precision != 0)
	{
		s_c->ret += ft_putnbr_base(nbr, DEC, 10);
		s_c->width -= nbr_len;
	}
	while (s_c->width-- > 0)
		s_c->ret += ft_putchar(' ');
}

static	void	print_u_nominus(uintmax_t nbr, int nbr_len, t_suitcase *s_c)
{
	if (s_c->is_precision)
		print_u_nomin_prec(nbr, nbr_len, s_c);
	else
	{
		while (s_c->width-- > nbr_len)
			s_c->ret += s_c->is_zero ? ft_putchar('0') : ft_putchar(' ');
		s_c->ret += ft_putnbr_base(nbr, DEC, 10);
	}
}

static	void	print_u_minus(uintmax_t nbr, int nbr_len, t_suitcase *s_c)
{
	while (s_c->precision > nbr_len)
		s_c->ret += ft_putchar('0') && s_c->width-- && s_c->precision--;
	if (!s_c->precision && !nbr)
		s_c->width++;
	else
		s_c->ret += ft_putnbr_base(nbr, DEC, 10);
	s_c->width -= nbr_len;
	while (s_c->width-- > 0)
		s_c->ret += ft_putchar(' ');
}

void			print_u(va_list *ap, t_suitcase *s_c)
{
	uintmax_t	nbr;
	int			nbr_length;

	nbr = u_size(ap, s_c);
	nbr_length = nbrlen(nbr, 10);
	if (s_c->is_minus)
		print_u_minus(nbr, nbr_length, s_c);
	else
		print_u_nominus(nbr, nbr_length, s_c);
}
