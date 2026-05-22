/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 16:51:24 by ctalia-g          #+#    #+#             */
/*   Updated: 2026/03/12 15:40:30 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}

#include <stdio.h>
int main(void)
{
	char	carol[] = "oi, Mari";
	int	length;
	length = ft_strlen(carol);
	// ft_strlen(carol);
	printf("%d", length);
	return(0);
}