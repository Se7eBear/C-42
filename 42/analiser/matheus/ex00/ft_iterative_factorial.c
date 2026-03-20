/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 10:27:30 by mathhenr          #+#    #+#             */
/*   Updated: 2026/03/17 16:33:59 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fat;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	fat = 1;
	while (nb > 0)
	{
		fat = fat * nb;
		nb--;
	}
	return (fat);
}

int	main(void)
{
	int	nb;

	nb = 6;
	printf("Fatorial de %d: %d", nb, ft_iterative_factorial(nb));
	return (0);
}
