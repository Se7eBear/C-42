NAME        = push_swap
CC          = cc
CFLAGS      = -Wall -Wextra -Werror

LIBFT_DIR   = ./libft
LIBFT       = $(LIBFT_DIR)/libft.a

SRCS        = main.c \
			ft_push_op.c ft_reverse_rotate_op.c ft_rotate_op.c ft_swap_op.c \
			sort/chunk_sort.c sort/disorder.c sort/ft_selection_sort.c \
			utils/utils_list.c utils/utils_main.c utils/utils_bench.c \
			utils/utils_validator.c utils/utils_print.c sort/radix_sort.c \
			utils/utils_flags.c utils/utils_split.c
OBJS        = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -L$(LIBFT_DIR) -lft -o $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

%.o: %.c
	$(CC) $(CFLAGS) -I. -I$(LIBFT_DIR) -c $< -o $@

clean:
	rm -f $(OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re