/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 20:54:18 by brde-car          #+#    #+#             */
/*   Updated: 2026/06/15 20:54:50 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_ptr(unsigned long n)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += ft_puthex_ptr(n / 16);
	count += ft_putchar("0123456789abcdef"[n % 16]);
	return (count);
}

int	ft_putptr(unsigned long ptr)
{
	int	count;

	if (!ptr)
		return (ft_putstr("(nil)"));
	count = 0;
	count += ft_putchar('0');
	count += ft_putchar('x');
	count += ft_puthex_ptr(ptr);
	return (count);
}
