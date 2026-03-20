/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 17:12:18 by hvaini-d          #+#    #+#             */
/*   Updated: 2026/03/13 16:31:58 by brde-car         ###   ########.fr       */
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

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	si;

	i = 0;
	si = 0;
	if (!to_find[0])
		return (str);
	while (str[i])
	{
		if (to_find[si] == str[i])
		{
			while (to_find[si] && str[i + si] && str[i + si] == to_find[si])
			{
				si++;
				if (to_find[si] == 0)
					return (&str[i]);
			}
		}
		si = 0;
		i++;
	}
	return ((void *)0);
}

#include <string.h>
#include <stdio.h>
int main(int argc, char **argv)
{
	if (argc != 3)
		return 1;
	char	*string1 = argv[1];
	char	*string2 = argv[2];
	char	*result1;
	char	*result2;

	result1 = strstr(string1,string2);
	result2 = ft_strstr(string1,string2);

	printf("(se crashar vai ser por causa do printf lendo ponteiro nullo!)\n");
	printf("%p == %p <- testemunhe \n", result2, result1);
	/* Result = a pointer to "haystack" */
	printf("%s\n", result1);
	printf("%s\n", result2);
}
