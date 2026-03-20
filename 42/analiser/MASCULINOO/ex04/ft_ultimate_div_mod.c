/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 11:42:20 by calexsan          #+#    #+#             */
/*   Updated: 2026/03/12 14:58:21 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *a / *b;
	*b = c % *b;
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 10;
// 	b = 20;

// 	printf("O valor de a e:%d\nO valor de b e:%d\n", a, b);
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("O valor de a e:%d\nO valor de b e:%d\n", a, b);
// }