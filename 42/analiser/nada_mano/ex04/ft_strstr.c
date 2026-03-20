/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 12:39:22 by nada-sil          #+#    #+#             */
/*   Updated: 2026/03/11 03:33:41 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while (to_find[j] != '\0' && str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			j++;
		}
		else
		{	
			j = 0;
		}
		i++;
	}
	if (j == 0)
	return ('\0');
else
return (&str[i - j]);
}
// #include <stdio.h>
// int main(void)
// {
// 	char array1[] = "aabaaavfd";
// 	char array2[] = "aaa";
// 	printf("%s", ft_strstr(array1, array2));
// 	return (0);
// }