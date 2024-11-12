CC = cc
FLAGS = -Wall -Wextra -Werror

all :
	$(CC) $(FLAGS) ft_*.c main.c
