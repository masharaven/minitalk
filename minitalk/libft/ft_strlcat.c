#include "libft.h"
size_t	ft_strlcat(char *dst, const char *src, size_t count)
{
	size_t	i;
	size_t	h;

	i = 0;
	h = 0;
	while (dst[i] && i < count)
		i++;
	while (src[h] && (i + h + 1) < count)
	{
		dst[i + h] = src[h];
		h++;
	}
	if (i < count)
		dst[i + h] = '\0';
	return (i + ft_strlen(src));
}
