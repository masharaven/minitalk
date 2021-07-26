#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*new_dst;
	unsigned char	*new_src;
	size_t			i;

	if (!dst && !src)
		return (0);
	new_dst = (unsigned char *)dst;
	new_src = (unsigned char *)src;
	i = -1;
	if (dst > src)
	{
		while (n--)
			new_dst[n] = new_src[n];
		return (new_dst);
	}
	else
	{
		while (++i < n)
			new_dst[i] = new_src[i];
	}
}
