/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 17:12:18 by hvaini-d          #+#    #+#             */
/*   Updated: 2026/03/13 16:34:47 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *w)
{
	int	size;

	size = 0;
	while (w[size] != '\0')
		size += 1;
	return (size);
}

char	*ft_strcat(char *dest, char *src)
{
	int size;
	int	dest_len;
	int	index;

	dest_len = ft_strlen(dest);
	index = 0;
	while (src(index))
	{
		dest[dest_len + index] = src[index];
		index++;
	}
	dest[dest_len + index] = '\0';
	return (dest);
}

#include <string.h>
#include <stdio.h>
int main() {
    char destino[20] = "Olá";
    char origem[] = "Mundo!";
	char destino2[20] = "Olá";
    char origem2[] = "Mundo!";
	ft_strcat(destino2, origem2);
    strcat(destino, origem); // destino agora contém "Olá, Mundo!"
    printf("%s vs %s", destino, destino2);
    return 0;
}
