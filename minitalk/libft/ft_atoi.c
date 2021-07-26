#include "libft.h"
int	ft_atoi(const char *g)
{
	size_t					i;
	size_t					sign;
	unsigned long long int	num;

	sign = 1;
	num = 0;
	i = 0;
	while ((g[i] >= 9 && g[i] <= 13) || g[i] == ' ')
		i++;
	if (g[i] == '-' || g[i] == '+')
	{
		if (g[i] == '-')
			sign = -1;
		i++;
	}	
	while (g[i] >= '0' && g[i] <= '9')
	{
		num = num * 10 + (g[i] - '0');
		i++;
	}
	return (num * sign);
}
