/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 17:12:18 by hvaini-d          #+#    #+#             */
/*   Updated: 2026/03/13 16:33:55 by brde-car         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	size;
	unsigned int	dest_len;
	unsigned int	index;

	dest_len = ft_strlen(dest);
	size = dest_len + ft_strlen(src);
	index = 0;
	while (dest_len + index < size && index < nb)
	{
		dest[dest_len + index] = src[index];
		index++;
	}
	if (dest[dest_len + index] != '\0')
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
	ft_strncat(destino2, origem2, 3);
    strncat(destino, origem, 3); // destino agora contém "Olá, Mundo!"
    printf("%s vs %s", destino, destino2);
    return 0;
}
