NAME	= libft.a

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

SRCDIR	= srcs
INCDIR	= includes

SRCS	= $(SRCDIR)/ft_putchar.c \
		  $(SRCDIR)/ft_putstr.c \
		  $(SRCDIR)/ft_strcmp.c \
		  $(SRCDIR)/ft_strlen.c \
		  $(SRCDIR)/ft_swap.c

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -I $(INCDIR) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re