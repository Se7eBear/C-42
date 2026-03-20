/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 10:47:04 by ctalia-g          #+#    #+#             */
/*   Updated: 2026/03/12 15:28:04 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int main(void)
{
    int x;

    x = 0;
    ft_ft(&x);
    ft_putchar(x / 10 + '0');
    ft_putchar(x % 10 + '0');
    return (0);
}


// #include<stdio.h>

// int	main(int argc, char **argv)
// {
// 	int i;

// 	i = ft_ft(*nbr)
// 	if (argc == 2)
// 	{
// 		printf("%d\n", ft_ft(argv[1]));
// 	}
// 	else
// 	{
// 		printf("faz direito.");
// 	}
// }