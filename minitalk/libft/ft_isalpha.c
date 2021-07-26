#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else 
		return 0;
}

/*int main()
{
	printf("%d", ft_isalpha(69));
	return 0;
}*/