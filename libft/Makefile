NAME = libft.a

all: ft_*.o
	cc -c -Wall -Werror -Wextra ft_*.c

archive: ft_*.o
	ar -rcs $(NAME) ft_*.o

clean: ft_*.o
	rm ft_*.o

fclean: clean
	rm -f $(NAME)

re: fclean all