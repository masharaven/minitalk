NAME = libft.a

LIST	= ft_strlcat.c\
			ft_strlcpy.c\
			ft_strlen.c\
			ft_atoi.c\
			ft_isalnum.c\
			ft_isalpha.c\
			ft_isascii.c\
			ft_isdigit.c\
			ft_isprint.c\
			ft_strlcat.c\
			ft_strlcpy.c\
			ft_strlen.c\
			ft_strncmp.c\
			ft_tolower.c\
			ft_toupper.c\
			ft_memcpy.c\
			ft_memccpy.c\
			ft_bzero.c\
			ft_memcmp.c\
			ft_memchr.c\
			ft_memmove.c\
			ft_memset.c\
			ft_strchr.c\
			ft_strrchr.c\
			ft_strnstr.c\
			ft_strdup.c\
			ft_calloc.c\
			ft_putstr_fd.c\
			ft_putnbr_fd.c\
			ft_itoa.c\
			ft_putchar_fd.c
	
OBJS 	= $(LIST:.c=.o)
FLAGS	= -Wall -Wextra -Werror

.o:.c
			gcc $(FLAGS) -c $< -o (<:.c=.o) -I .

all: 		$(NAME)

$(NAME):	$(OBJS) 
			ar rc $(NAME) $(OBJS) 

clean: 
			rm -rf $(OBJS)

fclean: 	clean
			rm -rf $(NAME)

re:
			fclean all

.PHONY: 	all clean fclean re