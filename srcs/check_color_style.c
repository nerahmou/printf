/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   check_color_style.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/19 10:13:45 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/20 14:19:56 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	get_style(const char *str)
{
	if (!ft_strncmp(ITALIC, str, 8))
	{
		ft_putstr(SET_ITALIC);
		return (ft_strlen(ITALIC));
	}
	if (!ft_strncmp(BOLD, str, 6))
	{
		ft_putstr(SET_BOLD);
		return (ft_strlen(BOLD));
	}
	ft_putstr(SET_UNDERLINE);
	return (ft_strlen(UNDERLINE));
}

static int	get_background_color(const char *str)
{
	if (!ft_strncmp(BBLUE, str, 7))
	{
		ft_putstr(SET_BBLUE);
		return (ft_strlen(BBLUE));
	}
	if (!ft_strncmp(BRED, str, 6))
	{
		ft_putstr(SET_BRED);
		return (ft_strlen(BRED));
	}
	ft_putstr(SET_BGREEN);
	return (ft_strlen(BGREEN));
}

static int	get_color(const char *str)
{
	if (!ft_strncmp(BLUE, str, 6))
	{
		ft_putstr(SET_BLUE);
		return (ft_strlen(BLUE));
	}
	if (!ft_strncmp(RED, str, 5))
	{
		ft_putstr(SET_RED);
		return (ft_strlen(RED));
	}
	ft_putstr(SET_GREEN);
	return (ft_strlen(GREEN));
}

int			check_color_style(const char *str, int *ret)
{
	if (!ft_strncmp(BBLUE, str, 7) || !ft_strncmp(BRED, str, 6) ||
			!ft_strncmp(BGREEN, str, 8))
		return (get_background_color(str));
	else if (!ft_strncmp(BLUE, str, 6) || !ft_strncmp(RED, str, 5) ||
			!ft_strncmp(GREEN, str, 7))
		return (get_color(str));
	else if (!ft_strncmp(ITALIC, str, 8) || !ft_strncmp(BOLD, str, 6) ||
			!ft_strncmp(UNDERLINE, str, 11))
		return (get_style(str));
	else if (!ft_strncmp(RES_COLOR, str, 5))
	{
		ft_putstr(SET_RES);
		return (ft_strlen(RES_COLOR));
	}
	else
		*ret += ft_putchar('{');
	return (1);
}
