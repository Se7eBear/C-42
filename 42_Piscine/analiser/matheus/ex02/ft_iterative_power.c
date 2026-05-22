/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 09:54:24 by mathhenr          #+#    #+#             */
/*   Updated: 2026/03/17 16:36:48 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	pow;

	i = 0;
	pow = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (i < power)
	{
		pow = pow * nb;
		i++;
	}
	return (pow);
}

int	main(void)
{
	int	nb;
	int	power;

	nb = 3;
	power = 2;
	printf("%d elev a %d: %d\n", nb, power, ft_iterative_power(nb, power));
	return (0);
}
