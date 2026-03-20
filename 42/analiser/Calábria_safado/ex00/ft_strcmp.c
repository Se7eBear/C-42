/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rviniciu <rviniciu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 19:14:20 by rviniciu          #+#    #+#             */
/*   Updated: 2026/03/06 19:14:31 by rviniciu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

// int main()
// {
// 	char ar1[] = {"Ola"};
// 	char ar2[] = {"Olas"};
// 	ft_strcmp(ar1, ar2);
// 	printf("%d\n", ft_strcmp(ar1, ar2));
// 	return (0);
// }
