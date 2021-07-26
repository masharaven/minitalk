#include "libft.h"

void	*ft_memset(void *dest, int c, size_t num)

{
	size_t			i;
	unsigned char	*k_dest;

	k_dest = (unsigned char *)dest;
	i = 0;
	while (i < num)
	{
		k_dest[i] = c;
		i++;
	}
	return (dest);
}

/*int main()
{
	printf("hell");
}*/
