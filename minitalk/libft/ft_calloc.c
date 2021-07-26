#include "libft.h"
void	*ft_calloc (size_t numb, size_t size)
{
	void	*p;

	p = (void *)malloc(size * numb);
	if (p == NULL)
		return (NULL);
	else
		ft_bzero(p, numb * size);
	return (p);
}
