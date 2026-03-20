/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 07:37:36 by brde-car          #+#    #+#             */
/*   Updated: 2026/03/18 14:59:16 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 1)
	{
		nb = nb * ft_recursive_factorial(nb - 1);
	}
	return (nb);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int i;

// 	i = 20;
// 	printf("%d\n", ft_recursive_factorial(i));
// 	return(0);
// }