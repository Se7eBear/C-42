/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 16:53:19 by jesequie          #+#    #+#             */
/*   Updated: 2026/03/12 14:37:19 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		j;
	int		i;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
// strcat Ela concatena a string de origem ao final da string de destino, 
//substituindo o caractere nulo ('\0') 
// inicial da origem no final da string de destino, 
//retornando a string resultante completa.
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char nome[15]="esequiel";
// 	char sobrenome[]="joab";
// 	printf("minha ft_strcat: %s\n",ft_strcat(nome,sobrenome));
// }
