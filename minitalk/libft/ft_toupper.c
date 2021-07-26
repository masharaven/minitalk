#include "libft.h"

int	ft_toupper(int c) //зачем int если должен возвращать char
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c); 
}


/*int main(int argc, char *argv[])
{
	ft_tolower(argv[1]);
	return 0;
}*/