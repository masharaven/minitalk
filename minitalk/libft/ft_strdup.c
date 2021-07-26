#include "libft.h"
char	*ft_strdup(const char *str)
{
	int		i;
	int		length;
	char	*dst;

	i = 0;
	length = ft_strlen(str);
	dst = (char *)malloc((length + 1) * sizeof(char));
	if (dst)
	{
		while (i <= length)
		{
			dst[i] = str[i];
			i++;
		}
		return (dst);
	}
	else
		return (NULL);
}
