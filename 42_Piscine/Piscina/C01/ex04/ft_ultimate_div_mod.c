/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 14:58:29 by brde-car          #+#    #+#             */
/*   Updated: 2026/03/05 17:51:52 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
// #include <stdio.h>

// int	 main(void)
// {
// 	int a;
// 	int b;
// 	a = 10;
// 	b = 2;
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("%d \n%d",a, b);	
// }