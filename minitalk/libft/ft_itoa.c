#include "libft.h"

static int	len(long nb) //считаем количество цифр в числе; длина числа
{
	int len;

	len = 0;
	if (nb < 0)
	{
		nb = nb * -1; 
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nb)
{
	char	*mesto;
	int		i;
	long	n;

	n = nb;
	i = len(n);//счетчик
	mesto = (char *)malloc(sizeof(char) * (i + 1));
	if (mesto == NULL)
		return (NULL);
	mesto[i--] = '\0';		//заполняем память нулями
	if (n == 0) 			//в случае нуля
	{
		mesto[0] = 48;
		return (mesto);
	}
	if (n < 0)				// при случае попадания отрицательного числа
	{
		mesto[0] = '-';
		n *= -1;			//делаем все число положительным, так как минус мы уже достали
	}
	while (n > 0)
	{
		mesto[i] = 48 + (n % 10);	//делим число, чтобы получить остаток и перевести его в char//все записывается и держится в mesto до тех пор, пока оно не будет вызвано
		n = n / 10; //отметаем последние числа; делим, чтобы продолжить доставать числа и переводить в char
		i--; 
	}
	return (mesto);
}
