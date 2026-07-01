/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 17:25:02 by brde-car          #+#    #+#             */
/*   Updated: 2026/06/30 14:51:44 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;
	int		ret;

	if (!str)
		return (-1);
	va_start(args, str);
	count = 0;
	while (*str)
	{
		if (*str == '%')
			ret = ft_check(*(++str), &args);
		else
			ret = ft_putchar(*str);
		str++;
		if (ret == -1)
		{
			va_end(args);
			return (-1);
		}
		count += ret;
	}
	va_end(args);
	return (count);
}
