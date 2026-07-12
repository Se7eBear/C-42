/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smachado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 16:25:21 by smachado          #+#    #+#             */
/*   Updated: 2026/06/11 19:01:57 by smachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	string_validator(const char *str)
{
	int	index;

	index = 0;
	if (!str)
		return (1);
	while (str[index])
	{
		if (str[index] == '%')
		{
		index++;
			if (!str[index])
				return (1);
			if (str[index] != 'c' && str[index] != 's'
				&& str[index] != 'p' && str[index] != 'd'
				&& str[index] != 'i' && str[index] != 'u'
				&& str[index] != 'x' && str[index] != 'X'
				&& str[index] != '%')
			{
				return (1);
			}
		}
		index++;
	}
	return (0);
}

int	ft_putstr(char *str)
{
	int	ctt;

	ctt = 0;
	while (*str)
	{
		write(1, str, 1);
		str++;
		ctt++;
	}
	return (ctt);
}

static int	handle_str(char *str)
{
	if (!str)
		return (ft_putstr("(null)"));
	return (ft_putstr(str));
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_exec(va_list	*args, const char fstr)
{
	int	*ptr;
	int	ctt;

	ctt = 0;
	ptr = &ctt;
	if (fstr == 'c')
		ctt += ft_putchar(va_arg(*args, int));
	if (fstr == 's')
		ctt += handle_str(va_arg(*args, char *));
	if (fstr == 'p')
		ctt += ft_putptr(va_arg(*args, void *), ptr);
	if (fstr == 'd' || fstr == 'i')
		ft_putnbr(va_arg(*args, int), ptr);
	if (fstr == 'u')
		ft_putnbr_unsigned(va_arg(*args, unsigned int), ptr);
	if (fstr == 'x')
		ft_puthex(va_arg(*args, unsigned int), ptr);
	if (fstr == 'X')
		ft_puthex_upper(va_arg(*args, unsigned int), ptr);
	if (fstr == '%')
		ctt += ft_putchar('%');
	return (ctt);
}
