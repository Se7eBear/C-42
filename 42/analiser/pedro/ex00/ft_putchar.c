/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 15:35:13 by psilva-l          #+#    #+#             */
/*   Updated: 2026/03/01 13:48:24 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// O compilador exige que esta função exista para gerar o executável
// int main(void)
// {
//     ft_putchar('H');
//     ft_putchar('i');
//     ft_putchar('\n');
//     return (0);
// }