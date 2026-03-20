/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 16:46:56 by smachado          #+#    #+#             */
/*   Updated: 2026/03/06 18:24:55 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 1;
	while ((*s1 || *s2) && (i < n))
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
	}
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
// 	char s1[] = "ab";
// 	char s2[] = "ac";

// 	int x = ft_strncmp(s1, s2, 1);
// 	printf("%d", x);
// }