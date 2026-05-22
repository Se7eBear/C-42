/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-andr <ede-andr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 15:22:04 by ede-andr          #+#    #+#             */
/*   Updated: 2026/03/17 11:37:14 by ede-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
// int	main(void)
// {
// 	int	a = 13;
// 	int	b = 2;
// 	int	resultado_div;
// 	int	resultado_mod;

// 	ft_div_mod(a, b, &resultado_div, &resultado_mod);
// 	printf("Divisão: %d\n", resultado_div);
// 	printf("Resto:   %d\n", resultado_mod);
// 	return (0);
// }