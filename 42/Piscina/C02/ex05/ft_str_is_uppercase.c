/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 17:53:46 by brde-car          #+#    #+#             */
/*   Updated: 2026/03/10 18:40:30 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
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
//     printf("Teste 1 (So letras lower): %d\n", ft_str_is_uppercase("abc"));
//     printf("Teste 2 (letras upper): %d\n", ft_str_is_uppercase("ACB"));
//     printf("Teste 3 (Com espaco): %d\n", ft_str_is_uppercase("12 3"));
//     printf("Teste 4 (Vazia):      %d\n", ft_str_is_uppercase(""));
//     return (0);
// }
