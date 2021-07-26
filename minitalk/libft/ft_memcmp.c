#include "libft.h"

/*int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char*)(s1 + i) != *(unsigned char*)(s2 + i))
			return (*(unsigned char*)(s1 + i) - *(unsigned char*)(s2 + i));
		i++;
	}
	return (0);
}*/

int	ft_memcmp(const void *s1, const void *s2, size_t count)
{
	size_t	i;

	i = 0;
	
	while (i < count)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return ((((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]));
		i++;
	}
	return (0);
}
/*
int main(int argc[], char *argv[])
{
	if (argc == 3)
		printf("%d", ft_memcmp(argv[1], argv[2], 4));
	 
	return 0;
}*/