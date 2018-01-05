/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.h                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/26 20:24:23 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/05 23:38:34 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define FLAGS "#0+- "
# define WIDTH "123456789*"
# define PREC "."
# define SIZE "hljz"
# define TYPE "sSdDioOuUxXcCp%"

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <wchar.h>

typedef	struct	s_suitcase
{
	int		is_flag;
	int		is_sharp;
	int		is_zero;
	int		is_minus;
	int		is_plus;
	int		is_space;

	int		width;

	int		precision;

	char	size;

	char	type;

	int		length;
	int		position;
}				t_suitcase;

typedef struct	s_funptr
{
	char		format;
	int			(*function)(va_list *ap, t_suitcase *s_c);
}				t_funptr;

int				ft_printf(const char *str, ...);

long			ft_abs(long nbr);
int				ft_atoi(const char *str);
void			ft_bzero(void *s, size_t n);
char			*ft_itoa(int n);
void			*ft_memalloc(size_t size);
void			*ft_memset(void *s, int c, size_t n);
int				ft_putchar(char c);
void			ft_putnbr(long nbr);
int				ft_putnbr_base(uintmax_t nbr, char *base, size_t baselen);
int				ft_putwchar(wchar_t c);
int				ft_putstr(const char *str);
int				ft_putwstr(const wchar_t *str);
char			*ft_strchr(const char *s, int c);
char			*ft_strdup(const char *src);
char			*ft_strnew(size_t size);
size_t			ft_strlen(const char *str);
int				nbrlen(long n, int base);
int				wcharlen(wchar_t c);

void			init_suitcase(t_suitcase *s_c);

int				get_attributs(t_suitcase *s_c, const char *str);
void			get_flag(t_suitcase *s_c, char c);
void			get_width(t_suitcase *s_c, const char *str);
void			get_size(t_suitcase *s_c, const char *str);
void			get_prec(t_suitcase *s_c, const char *str);
void			get_type(t_suitcase *s_c, char c);

int				print(va_list *ap, t_suitcase *s_c);

int				init_funformat(t_funptr *tab[15]);
void			init_funptr(t_funptr *tab[15]);
void			free_funptr(t_funptr *tab[15]);

int				print_s(va_list *ap, t_suitcase *s_c);
int				print_d(va_list *ap, t_suitcase *s_c);
int				print_o(va_list *ap, t_suitcase *s_c);
int				print_u(va_list *ap, t_suitcase *s_c);
int				print_x(va_list *ap, t_suitcase *s_c);
int				print_c(va_list *ap, t_suitcase *s_c);
int				print_p(va_list *ap, t_suitcase *s_c);
int				print_m(va_list *ap, t_suitcase *s_c);

#endif
