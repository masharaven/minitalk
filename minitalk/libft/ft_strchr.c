#include "libft.h"

char	*ft_strchr (const char *str, int ch)
{
	char	*k_str;

	k_str = (char *)str;
	while (*k_str != (char)ch)
	{
		if (*k_str == 0)
			return (NULL);
		k_str++;
	}
	return (k_str);
}
