#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	llen;

	llen = ft_strlen(little);
	if (*little == 0)
		return ((char *)big);
	while (*big && len >= llen)
	{
		if (*big == *little && ft_memcmp(big, little, llen) == 0)
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
