/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 19:10:17 by jesequie          #+#    #+#             */
/*   Updated: 2026/03/12 14:42:49 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!to_find[j])
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j])
		{
			j++;
		}
		if (!to_find[j])
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}
// A função
// strstr() em C é usada para localizar a primeira ocorrência de uma substring 
//(needle) dentro de uma string maior 
// (haystack), retornando um ponteiro para o início da 
//correspondência ou NULL se não for encontrada.
// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char src [] = "jlll12joab13";
// 	char find [] = "joab13";
// 	printf("meu ftstrstr:\n");
// 	ft_strstr(src,find);
// 	printf("%s",ft_strstr(src,find));
// 	printf("%s", src);
// }