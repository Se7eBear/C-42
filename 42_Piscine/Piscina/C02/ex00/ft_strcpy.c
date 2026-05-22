/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 21:50:51 by brde-car          #+#    #+#             */
/*   Updated: 2026/03/15 07:47:17 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
// #include <stdio.h>
// int main(void)
// {
// 		char	*src = "Hello!";		
// 		char 	dest[20];
// 		ft_strcpy(dest, src);
// 		printf("%s\n", dest);
// 		printf("%s\n", src);
// 		return(0);
// }