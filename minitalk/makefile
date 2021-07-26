NAME1 = server

NAME2 = client


CC = gcc

CFLAGS = -Wall -Werror -Wextra

RM = rm -rf

# OSRCS = $(SRCS:.c=.o)

all: 
	make -C libft
	$(CC) $(CFLAGS) server.c libft/libft.a -o $(NAME1)
	$(CC) $(CFLAGS) client.c libft/libft.a -o $(NAME2)

clean:
	make -C libft
	$(RM) client.o server.o

fclean: clean
	make fclean - C libft/*.o

re: fclean all
