/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 16:39:45 by mathhenr          #+#    #+#             */
/*   Updated: 2026/03/17 16:42:40 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	sqrt;

	i = 1;
	sqrt = 1;
	while (sqrt <= nb)
	{
		sqrt = i * i;
		if (sqrt == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	int	nb;

	nb = 81;
	printf("A raiz de %d é %d\n", nb, ft_sqrt(nb));
	return (0);
}
