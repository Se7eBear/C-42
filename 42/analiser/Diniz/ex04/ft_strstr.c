/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 17:31:49 by joaopedr          #+#    #+#             */
/*   Updated: 2026/03/12 16:02:27 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while ((*s1 && *s1 == *s2) && i < n)
	{
		s1++;
		s2++;
		i++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	strlen;
	int	index;
	int	j;

	index = 0;
	strlen = 0;
	while (to_find[strlen])
	{
		strlen++;
	}
	while (str[index])
	{
		if (ft_strncmp(&str[index], to_find, strlen) == 0)
		{
			return (&str[index]);
		}
		index++;
	}
	return ((void *)0);
}
