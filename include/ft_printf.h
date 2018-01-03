/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.h                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/26 20:24:23 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/03 17:06:49 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <wchar.h>

int		ft_printf(const char *str, ...);
int		check_type(va_list *ap, char c);

int		printf_s(va_list *ap, char c);
int		printf_p(va_list *ap);
int		printf_c(va_list *ap, char c);
int		printf_i(va_list *ap, char c);
int		printf_o(va_list *ap, char c);
int		printf_x(va_list *ap, char c);
int		printf_u(va_list *ap, char c);
#endif
