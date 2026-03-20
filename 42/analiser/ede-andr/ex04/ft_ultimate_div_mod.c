/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-andr <ede-andr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 11:03:28 by ede-andr          #+#    #+#             */
/*   Updated: 2026/03/17 11:36:11 by ede-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 13;
// 	b = 5;
// 	printf("Antes  -> a: %d, b: %d\n", a, b);
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("Depois -> a: %d, b: %d\n", a, b);
// 	return (0);
// }
