/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 14:41:38 by ede-andr          #+#    #+#             */
/*   Updated: 2026/03/17 18:20:09 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int	x = 10;
	int	y = 20;

	printf("Antes: x = %d, y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("Depois: x = %d, y = %d\n", x, y);
	return (0);
}