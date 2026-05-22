/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 18:51:57 by brde-car          #+#    #+#             */
/*   Updated: 2026/03/17 18:58:55 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

// #include<stdio.h>
// int main(int argc, char **argv)
// {
// 	if (argc == 3)
// 	{
// 		printf("%s\n", ft_strcat(argv[1], argv[2]));
// 	}
// 	else
// 	{
// 		printf("faz direito.");
// 	}
// 	return(0);
// }
