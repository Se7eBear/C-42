/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 11:41:18 by mathhenr          #+#    #+#             */
/*   Updated: 2026/03/17 16:45:38 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	count;

	i = 1;
	count = 0;
	if (nb <= 1)
		return (0);
	while (i <= nb)
	{
		if ((nb % i) == 0)
			count++;
		i++;
	}
	if (count == 2)
		return (1);
	return (0);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	if (ft_is_prime(nb))
	{
		return (nb);
	}
	while (!ft_is_prime(nb + i))
	{
		i++;
	}
	return (nb + i);
}

int	main(void)
{
	int	nb;

	nb = 9;
	printf("É primo: %d", ft_find_next_prime(nb));
	return (0);
}
