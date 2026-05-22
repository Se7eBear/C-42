/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 07:37:23 by brde-car          #+#    #+#             */
/*   Updated: 2026/03/19 15:38:17 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int i;
	int result;
	int s;

	i = 0;
	result = 0;
	s = 1;
	while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while(str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * s);
}

void ft_putnbr(int nb)
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
	ft_putchar((nl % 10)+ '0');
}

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	i = 1;
	while (nb > 0)
	{
		i = i * nb;
		nb--;
	}
	return (i);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_putnbr(ft_iterative_factorial(ft_atoi(argv[1])));	
	}
	else
	{
		write(1, "escreve direito.", 15);
	}
	return(0);
}