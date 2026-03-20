/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 17:34:05 by blima-ha          #+#    #+#             */
/*   Updated: 2026/03/17 17:14:22 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

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

int	check_base(char *base)
{
	int	i;
	int	base_len;
	int	j;

	base_len = ft_strlen(base);
	if (base_len < 2)
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+' || base[i] <= 32 || base[i] >= 126)
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (base_len);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		size;
	long	n;
	char	c;

	size = check_base(base);
	if (size < 2)
		return ;
	else
	{
		n = nbr;
		if (n < 0)
		{
			write(1, "-", 1);
			n = -n;
		}
		if (n >= size)
		{
			ft_putnbr_base((n / size), base);
		}
		c = base[n % size];
		write(1, &c, 1);
	}
}

int	main(void)
{
	int	nbr = -10;
	char	base[] = "01";

	ft_putnbr_base(nbr, base);
	return (0);
}
