#include "libft.h"

char	*strrchr (const char *str, int ch)
{
	char	*last;

	last = (char *)str;
	while (*last)
		last++;
	while (*last--)
	{
		if (*last == (char )ch)
			return ((char *)last);
		last++;
	}
	return (NULL);
}
