/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 17:44:34 by brde-car          #+#    #+#             */
/*   Updated: 2026/03/17 21:17:36 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>


#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	nl;

	nl = nb;
	if (nl < 0)
	{
		ft_putchar('-');
		nl *= -1;
	}
	if (nl >= 10)
	{
		ft_putnbr(nl / 10);
	}
	ft_putchar((nl % 10) + '0');
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_str(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	int i;
	
	i = -567680;
	//i = ft_strlen("teste");
	//ft_str("Teste caralho.");
	ft_putnbr(i);
}