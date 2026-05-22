/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 16:08:12 by blima-ha          #+#    #+#             */
/*   Updated: 2026/03/17 17:05:36 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putnbr(int nb)
{
	long	n;
	char	mod;

	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	mod = (n % 10) + '0';
	write(1, &mod, 1);
}

int	main(void)
{
	ft_putnbr(-127349824);
	return (0);
}
