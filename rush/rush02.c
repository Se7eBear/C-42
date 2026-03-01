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
			else if (coluna == y)
				ft_putchar('A');
			else if (linha == y && coluna == x )
				ft_putchar('C');
			else if (linha == x)
				ft_putchar('C');
			else
				ft_putchar('B');				
			coluna++;
		}
		ft_putchar('\n');
		linha++;
	}
}

void mostrar_C(int x, int y)
int main(void)
{
	rush (5,1);
	return (0);
}
