#include "libft.h"


int	ft_tolower(int c) //зачем int если должен возвращать char
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c); 
}


/*int main(int argc, char *argv[])
{
    printf("%d", ft_tolower(90));
    return 0;
}*/