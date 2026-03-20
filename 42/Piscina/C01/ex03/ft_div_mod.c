/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 18:18:19 by brde-car          #+#    #+#             */
/*   Updated: 2026/03/05 17:51:48 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
// #include <stdio.h>
// int main(void)
// {
// 	int div;
// 	int mod;
// 	int a;
// 	int b;
// 	a = 5;
// 	b = 5;
// 	ft_div_mod(a, b, &div, &mod);
// 	printf("%d \n%d", div, mod);
// }