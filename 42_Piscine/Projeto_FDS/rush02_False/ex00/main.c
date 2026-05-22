// Protótipo da nossa função para não precisarmos de um arquivo .h agora
void ft_putstr(char *str);

int main(int argc, char **argv)
{
    // O subject diz que o programa pode receber até 2 argumentos (então argc pode ser 2 ou 3) 
    if (argc == 2)
    {
        ft_putstr("Argumento recebido: ");
        ft_putstr(argv[1]);
        ft_putstr("\nTeste do Makefile concluido!\n");
    }
    else if (argc == 3)
    {
        ft_putstr("Dicionario: ");
        ft_putstr(argv[1]);
        ft_putstr(" | Numero: ");
        ft_putstr(argv[2]);
        ft_putstr("\n");
    }
    else
    {
        // Se não for nem 1 nem 2 argumentos, imprimimos a mensagem de erro padrão [cite: 127]
        ft_putstr("Error\n");
    }
    return (0);
}