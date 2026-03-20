/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 07:37:54 by brde-car          #+#    #+#             */
/*   Updated: 2026/03/19 14:29:06 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	while (i < power)
	{
		j = j * nb;
		i++;
	}
	return (j);
}

// #include<stdio.h>
// int	main(void)
// {
// 	int nb;
// 	int power;

// 	nb = 4;
// 	power = 2;
// 	printf("%d\n", ft_iterative_power(nb, power));
// 	return(0);
// }