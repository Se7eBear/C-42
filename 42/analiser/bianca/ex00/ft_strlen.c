/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 15:05:03 by blima-ha          #+#    #+#             */
/*   Updated: 2026/03/17 17:02:49 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putnbr(int nbr)
{
	long	n;
	char	mod;

	n = nbr;
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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(void)
{
	char str[] = "Hello";
	int	r;

	r = ft_strlen(str);
	ft_putnbr(r);
	return (0);
}
