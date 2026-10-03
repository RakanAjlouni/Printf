CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a

SRCS = src/ft_dispatcher.c src/ft_print_chars.c src/ft_printf.c\
       src/ft_print_hex.c src/ft_print_numbers.c src/ft_print_ptr.c\
       libft/ft_putchar_fd.c libft/ft_putstr_fd.c libft/ft_strlen.c\

OBJS = $(SRCS:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
