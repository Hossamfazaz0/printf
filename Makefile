NAME = libftprintf.a
SRCS = ft_putchar.c \
	   ft_putstr.c \
	   ft_print_hexa.c \
	   ft_print_hexa_upper.c \
	   ft_printf.c \
	   ft_putnbr.c \
	   ft_unsigned.c
OBJECT = $(SRCS:.c=.o)
CC = cc
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECT)
	ar -rc $(NAME) $(OBJECT)


clean:
	rm -f $(OBJECT)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
