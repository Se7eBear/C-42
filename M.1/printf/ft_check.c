/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 20:23:06 by brde-car          #+#    #+#             */
/*   Updated: 2026/06/15 21:10:36 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(char format, va_list *args)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += ft_putchar(va_arg(*args, int));
	else if (format == 's')
		count += ft_putstr(va_arg(*args, char *));
	else if (format == 'p')
		count += ft_putptr(va_arg(*args, unsigned long));
	else if (format == 'd')
		count += ft_putnbr(va_arg(*args, int));
	else if (format == 'i')
		count += ft_putnbr(va_arg(*args, int));
	else if (format == 'u')
		count += ft_putnbr_unsigned(va_arg(*args, unsigned int));
	else if (format == 'x')
		count += ft_puthex(va_arg(*args, unsigned int), "0123456789abcdef");
	else if (format == 'X')
		count += ft_puthex(va_arg(*args, unsigned int), "0123456789ABCDEF");
	else if (format == '%')
		count += ft_putchar('%');
	return (count);
}
