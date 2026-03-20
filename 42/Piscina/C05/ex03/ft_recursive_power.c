/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 07:38:20 by brde-car          #+#    #+#             */
/*   Updated: 2026/03/19 14:29:16 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if ((power == 0 && nb == 0) || power == 0)
		return (1);
	if (power > 1)
	{
		nb = nb * ft_recursive_power(nb, power - 1);
	}
	return (nb);
}

// #include<stdio.h>
// int	main(void)
// {
// 	int nb;
// 	int power;

// 	nb = 3;
// 	power = 3;
// 	printf("%d\n", ft_recursive_power(nb, power));
// 	return(0);
// }