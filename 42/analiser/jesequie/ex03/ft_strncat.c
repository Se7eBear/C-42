/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 18:50:12 by jesequie          #+#    #+#             */
/*   Updated: 2026/03/12 14:38:20 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && nb > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		nb--;
	}
	dest[i] = '\0';
	return (dest);
}
// A função
// strncat em C retorna um ponteiro para a string de destino (dest), ou seja, 
//o endereço de memória da string resultante 
// após a concatenação segura de até caracteres da string de origem
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char nome[15]="esequiel";
// 	char sobrenome[]="joab";
// 	printf("minha ft_strncat: %s\n",ft_strncat(nome,sobrenome,4));
// }