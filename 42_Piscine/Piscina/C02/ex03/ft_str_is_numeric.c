/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 22:41:40 by brde-car          #+#    #+#             */
/*   Updated: 2026/03/10 18:38:56 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
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
//     printf("Teste 1 (So numero): %d\n", ft_str_is_numeric("12345"));
//     printf("Teste 2 (com espaco): %d\n", ft_str_is_numeric("123 "));
//     printf("Teste 3 (so letras): %d\n", ft_str_is_numeric("Hello World"));
//     printf("Teste 4 (Vazia): %d\n", ft_str_is_numeric(""));
//     return (0);
// }