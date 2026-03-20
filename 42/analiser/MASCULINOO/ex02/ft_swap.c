/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 14:24:35 by calexsan          #+#    #+#             */
/*   Updated: 2026/03/12 14:56:07 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 10;
// 	b = 6;
// 	printf("%d\n", b);
// 	printf("%d\n", a);
// 	ft_swap(&a, &b);

// 	printf("%d\n", b);
// 	printf("%d\n", a);

// }