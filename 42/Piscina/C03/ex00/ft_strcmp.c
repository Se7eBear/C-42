/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 10:29:06 by brde-car          #+#    #+#             */
/*   Updated: 2026/03/17 20:31:03 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<unistd.h>

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void	ft_putnbr(int nb)
// {
// 	long	nl;
	
// 	nl = nb;
// 	if (nl < 0)
// 	{
// 		ft_putchar('-');
// 		nl *= -1;
// 	}
// 	if (nl >= 10)
// 	{
// 		ft_putnbr(nl / 10);
// 	}
// 	ft_putchar((nl % 10) + '0');
// }

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned int)s1[i] - (unsigned int) s2[i]);
}
// #include<stdio.h>
// #include<string.h>
// int	main(int argc, char **argv)
// {	
// 	if (argc == 3)
// 	{
// 		int i = ft_strcmp(argv[1], argv[2]);
// 		ft_putnbr(i);
// 	}
// 	else
// 	{
// 		printf("Escreve direito a parada jhow");
// 	}
// 	return(0);
// }