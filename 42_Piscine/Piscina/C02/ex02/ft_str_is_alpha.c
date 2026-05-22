/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 05:51:04 by brde-car          #+#    #+#             */
/*   Updated: 2026/03/17 13:02:27 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 65 && str[i] <= 90) && !(str[i] >= 97 && str[i] <= 122))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// #include<stdio.h>
// int main(void)
// {
//     printf("Teste 1 (So letras): %d\n", ft_str_is_alpha("HelloWorld"));
//     printf("Teste 2 (Com numero): %d\n", ft_str_is_alpha("HelloW0rld"));
//     printf("Teste 3 (Com espaco): %d\n", ft_str_is_alpha("Hello World"));
//     printf("Teste 4 (Vazia):      %d\n", ft_str_is_alpha(""));
//     return (0);
// }
