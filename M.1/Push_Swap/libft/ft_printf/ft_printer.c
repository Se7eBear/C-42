/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smachado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 16:55:49 by smachado          #+#    #+#             */
/*   Updated: 2026/06/11 19:05:22 by smachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb, int *ptr)
{
	long int	n;

	n = nb;
	if (n < 0)
	{
		n *= -1;
		write(1, "-", 1);
		*ptr += 1;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10, ptr);
	}
	*ptr += ft_putchar((n % 10) + 48);
}

void	ft_putnbr_unsigned(unsigned int nb, int *ptr)
{
	if (nb >= 10)
	{
		ft_putnbr_unsigned(nb / 10, ptr);
	}
	ft_putchar((nb % 10) + 48);
	*ptr += 1;
}

void	ft_puthex(unsigned long n, int *ptr)
{
	char	*base;

	base = "0123456789abcdef";
	if (n >= 16)
		ft_puthex(n / 16, ptr);
	ft_putchar(base[n % 16]);
	*ptr += 1;
}

void	ft_puthex_upper(unsigned long n, int *ptr)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (n >= 16)
		ft_puthex_upper(n / 16, ptr);
	ft_putchar(base[n % 16]);
	*ptr += 1;
}

int	ft_putptr(void *ptr, int *ptrlen)
{
	if (!ptr)
	{
		ft_putstr("(nil)");
		return (5);
	}
	ft_putstr("0x");
	ft_puthex((unsigned long)ptr, ptrlen);
	return (2);
}
