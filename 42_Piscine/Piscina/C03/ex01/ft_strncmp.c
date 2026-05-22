/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 12:55:53 by brde-car          #+#    #+#             */
/*   Updated: 2026/03/17 20:38:04 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (i < n -1 && s1[i] != '\0' && s2[i] != '\0' && (s1[i] == s2[i]))
	{
		i++;
	}
	return ((unsigned int)s1[i] - (unsigned int)s2[i]);
}

#include<stdio.h>
#include<string.h>

int main(int argc, char **argv)
{
	unsigned int n;

	n = 5;
	if (argc == 3)
	{
		printf("%d\n", ft_strncmp(argv[1], argv[2], n));
		printf("%d\n", strncmp(argv[1], argv[2], n));
	}
	else
	{
		printf("coloca a entrada certa. la ele.");
	}
}