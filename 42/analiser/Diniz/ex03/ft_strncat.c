/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaopedr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 14:15:28 by joaopedr          #+#    #+#             */
/*   Updated: 2026/03/11 21:05:43 by joaopedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int		i;
	char	*start;

	i = 0;
	start = dest;
	while (*dest)
	{
		dest++;
	}
	while (src[i] && i < nb)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (start);
}
