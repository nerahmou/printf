/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.h                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/26 20:24:23 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/26 23:22:20 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(const char c);
void	ft_putstr(const char *str);
void	ft_putnbr(int nbr);
int		ft_strlen(const char *str);
int		int_len(int nbr);

int		ft_print_s(char *str);
int		ft_print_int(int nbr);
int		ft_print_int_base(int nbr);

#endif
