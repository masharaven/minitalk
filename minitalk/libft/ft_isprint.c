#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);

}


/*int main(int argc, char *argv[])
{
	printf("%d", ft_isprint(9765));
	return 0;
}
*/