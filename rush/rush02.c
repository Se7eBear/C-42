#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}


void rush(int x, int y)
{
	int coluna;
	int linha;
	linha = 1;
	while	(linha <= y)
	{
		coluna = 1;
		while	(coluna <= x)
		{
			if (coluna == 1 && linha == 1)
				ft_putchar('A');
			else if (coluna == x)
				ft_putchar('A');
			else
				ft_putchar('B');				
			coluna++;
		}
		ft_putchar('\n');
		linha++;
	}
}

void mostrar_B(int x, int y)
{
	int linha;
	int coluna;
	linha = 1;
	while 	(linha <= y)
	{
		coluna = 1;
		while (coluna <= x){
			if (coluna == 1 && linha == y)
				ft_putchar('B');
			else if (coluna == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
				coluna++;
		}
			ft_putchar('\n');
			linha++;
	}
}
void	mostrar_c(int x, int y)
{
	int coluna;
	int linha;
	linha = 1;
	while (linha <= y)
	{	coluna = 1;
		while(coluna <= x)
		{
			if (linha == y && coluna == 1)
				ft_putchar('C');
			else if (coluna == x)
				ft_putchar('C');
			else
				ft_putchar('B');
				coluna++;
		}
		ft_putchar('\n');
		linha++;
	}
}
int main(void)
{
	rush (5,1);
	mostrar_B (5, 1);
	mostrar_c(5, 1);
	return (0);
}
}
