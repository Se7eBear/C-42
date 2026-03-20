/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 17:03:41 by calexsan          #+#    #+#             */
/*   Updated: 2026/03/12 15:00:16 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	i++;
	return (i);
}

#include <stdio.h>
int	main(void)
{
	int	b;

	b = ft_strlen("hello, how are you today?");
	printf("Numero de caracteres:%d", b);
}