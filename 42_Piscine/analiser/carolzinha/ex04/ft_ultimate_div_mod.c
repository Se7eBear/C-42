/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 19:27:53 by ctalia-g          #+#    #+#             */
/*   Updated: 2026/03/12 15:38:37 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}
// void	ft_ultimate_div_mod2(int *a, int*b)
// {
// 	int div;
// 	int mod;

// 	div = *a / *b;
// 	mod = *a % *b;
// }
int main(void)
{    
    int a;
    int b;
    a = 10;
    b = 20;

    ft_ultimate_div_mod(&a, &b);
    printf("valor de a %d \n valor de b %d", a, b);
    return (0);

}