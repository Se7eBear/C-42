/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 13:19:24 by ctalia-g          #+#    #+#             */
/*   Updated: 2026/03/12 15:36:42 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int main(void)
// {
//     int	div;
//     int	mod;
// 	int	a;
// 	int	b;
// 	// char	str[] = "hello, carol";

// 	char dig1;
// 	char dig2;

// 	a = 15;
// 	b = 5;

// 	ft_div_mod(a, b, &div, &mod);
// 	dig1 = div + '0';
// 	dig2 = mod + '0';
// 	write(1, &dig1, 1);
// 	write(1, "\n", 1);
// 	write(1, &dig2, 1);
// 	// printf("div = %d, mod = %d\n", div, mod);
// 	// printf("minha string: %s\n", str);
// 	return (0);
// }
