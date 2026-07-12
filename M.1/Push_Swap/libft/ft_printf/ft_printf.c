/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smachado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 16:48:13 by smachado          #+#    #+#             */
/*   Updated: 2026/06/11 19:05:55 by smachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *fstr, ...)
{
	va_list	args;
	int		ctt;

	ctt = 0;
	if (string_validator(fstr))
		return (-1);
	va_start(args, fstr);
	while (*fstr)
	{
		if (*fstr == '%')
		{
			fstr++;
			ctt += ft_exec(&args, *fstr);
		}
		else
		{
			write(1, fstr, 1);
			ctt++;
		}
		fstr++;
	}
	va_end(args);
	return (ctt);
}
