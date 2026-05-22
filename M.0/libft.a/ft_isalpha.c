/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 09:27:25 by brde-car          #+#    #+#             */
/*   Updated: 2026/05/05 23:14:48 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalpha(int c)
{
    if (!(c >= 65 && c <= 90) && !(c >= 97 && c <= 122))
    {
        return (0);
    }
    return (1);
}

// #include<stdio.h>
// int main(void)
// {
//     printf("Teste 1 (So letras): %d\n", ft_isalpha("HelloWorld"));
//     printf("Teste 2 (Com numero): %d\n", ft_isalpha("HelloW0rld"));
//     printf("Teste 3 (Com espaco): %d\n", ft_isalpha("Hello World"));
//     printf("Teste 4 (Vazia):      %d\n", ft_isalpha(""));
//     return (0);
// }