#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/*int main(int argc, char *argv[])
{
    if (argc == 2)
        printf("%d\n", ft_strlen(argv[1]));
    else 
        write(1, "0", 1);
    return 0;
}
*/
