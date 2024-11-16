NAME = libftprintf.a
CC = cc

FLAGS = -Wall -Wextra -Werror

SRC =	ft_countnbr.c ft_itoa.c ft_strlen.c ft_putstr.c \
		ft_char.c ft_str.c ft_pointeraddr.c ft_decimal.c \
		ft_integer.c ft_unsignedint.c ft_hexdecimal.c \
		ft_strformat.c ft_printf.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar -rcs $(NAME) $(OBJ)

%.o : %.c
	$(CC) $(FLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
