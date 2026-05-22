/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 01:31:31 by brde-car          #+#    #+#             */
/*   Updated: 2026/03/17 20:40:03 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	nl;

	nl = nb;
	if (nl < 0)
	{
		ft_putchar('-');
		nl *= -1;
	}
	if (nl >= 10)
	{
		ft_putnbr(nl / 10);
	}
	ft_putchar((nl % 10) + '0');
}

// int main(void)
// {
// 	int c;

// 	c = -2147483648;
// 	ft_putnbr(c);
// }