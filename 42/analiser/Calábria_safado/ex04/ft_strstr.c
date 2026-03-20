/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rviniciu <rviniciu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 19:50:55 by rviniciu          #+#    #+#             */
/*   Updated: 2026/03/06 19:51:44 by rviniciu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i])
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (to_find[j])
			{
				if (str[i + j] != to_find[j])
					break ;
					j++;
			}
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	char ar1[] = "Texto";
// 	char ar2[] = "xto";
// 	printf("%s\n", ft_strstr(ar1, ar2));
// }
