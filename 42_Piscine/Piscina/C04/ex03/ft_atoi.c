/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 01:32:16 by brde-car          #+#    #+#             */
/*   Updated: 2026/03/15 07:43:08 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	s;

	result = 0;
	i = 0;
	s = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * s);
}

// #include <stdio.h>

// int main(int argc, char **argv)
// {
// 	if (argc == 2)
// 	{
// 		printf("%d\n", ft_atoi(argv[1]));
// 	}
// 	else
// 	{
// 		printf("Mano, não é possivel que vc erra tanto.");
// 	}
// }
