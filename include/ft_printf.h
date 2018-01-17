/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.h                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/26 20:24:23 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/17 17:18:01 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define FLAGS " #0+-"
# define WIDTH "123456789*"
# define PREC "."
# define SIZE "hljz"
# define TYPE "sSdDioOuUxXcCp%"

# define XUPP "0123456789ABCDEF"
# define XLOW "0123456789abcdef"
# define DEC "0123456789"
# define OCT "01234567"

# define NUL "(null)"

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <wchar.h>

typedef	struct	s_suitcase
{
	int		is_sharp;
	int		is_zero;
	int		is_minus;
	int		is_plus;
	int		is_space;

	int		width;

	int		is_precision;
	int		prec;

	char	size;

	char	type;

	int		length;
	int		position;

	int		ret;
}				t_suitcase;

int				ft_printf(const char *str, ...);

intmax_t		ft_abs(long nbr);
int				ft_atoi(const char *str);
void			ft_bzero(void *s, size_t n);
char			*ft_itoa(int n);
char			*ft_itoa_base_low(int n, int base);
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
size_t			ft_wstrlen(const wchar_t *str);
int				nbrlen(uintmax_t n, int base);
int				wcharlen(wchar_t c);
intmax_t		d_size(va_list *ap, t_suitcase *s_c);
uintmax_t		u_size(va_list *ap, t_suitcase *s_c);

void			init_suitcase(t_suitcase *s_c);

int				get_attributs(va_list *ap, t_suitcase *s_c, const char *str);
void			get_flag(t_suitcase *s_c, char c);
void			get_width(va_list *ap, t_suitcase *s_c, const char *str);
void			get_size(t_suitcase *s_c, const char *str);
void			get_prec(va_list *ap, t_suitcase *s_c, const char *str);
void			get_type(t_suitcase *s_c, char c);

void			print(va_list *ap, t_suitcase *s_c);

void			print_s(va_list *ap, t_suitcase *s_c);
void			print_s_minus(char *str, t_suitcase *s_c);
void			print_s_nominus(char *str, t_suitcase *s_c);
void			print_ws_minus(wchar_t *wstr, t_suitcase *s_c);
void			print_ws_nominus(wchar_t *wstr, t_suitcase *s_c);
void			print_d(va_list *ap, t_suitcase *s_c);
void			print_o(va_list *ap, t_suitcase *s_c);
void			print_u(va_list *ap, t_suitcase *s_c);
void			print_x(va_list *ap, t_suitcase *s_c);
void			print_c(va_list *ap, t_suitcase *s_c);
void			print_p(va_list *ap, t_suitcase *s_c);
void			print_m(t_suitcase *s_c);
#endif
