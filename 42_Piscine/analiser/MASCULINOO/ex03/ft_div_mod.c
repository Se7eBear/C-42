/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 11:10:31 by calexsan          #+#    #+#             */
/*   Updated: 2026/03/12 14:56:43 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	mod;
// 	int	div;

// 	a = 20;
// 	b = 10;

// 	printf("O valor de a e:%d\nO valor de b e:%d\n", a, b);
// 	ft_div_mod(a, b, &div, &mod);
// 	printf("O valor da divisao e: %d\nO valor do resto e:%d\n", div, mod);
// }