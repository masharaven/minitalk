#include "libft.h"

/*void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t  i;

	i = 0;
	if (i == n)
		return (NULL);
	while (n > 0)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void*)(s + i));
		i++;
		n--;
	}
	return (NULL);
}
*/
void
	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;


	i = 0;
	while (i < n)
	{
		if (*(unsigned char*)(s + i) == (unsigned char)c) //можем сделать ((unsigned char *)s)[i] ??
			return ((void*)(s + i));
		i++;
	}	
	if (i == n)
		return (NULL);
	return (NULL);
}