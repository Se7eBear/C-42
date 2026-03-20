

#include<unistd.h>

void	ft_putnbr(int nb)
{
	long nl;
	
	nl = nb;
	
	if (nl < 0)
	{
		write(1, '-', 1);
		nl *= -1;
	}
	if (nl > 9)
		ft_putnbr(nl / 10);
	nl = nl % 10 + '0';
	write(1, &nl, 1);
}

int ft_atoi(char *str)
{
	int i;
	long result;
	int s;
	
	i = 0;
	s = 1;
	result = 0;
	while (str[i] >= 9 && str[i] <= 13 || (str[i] == " "))
		i++;
	while(str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while(str[i] >= 0 && str[i] <= 9)
	{	
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * s); 
}
