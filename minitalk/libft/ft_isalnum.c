#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return  (1);
	else 
		return (0);
}

/*int main()
{
	printf("%d", ft_isalnum(4987));
	return 0;
}*/