//A client that takes a string as argument, translates it to binary & sends it to the server
#include "./libft/libft.h"
#include <stdio.h>

void	do_zeros_and_ones(char *str, int len, int pid)
{
	int	i;
	int	moving;
	// int	l;
//h			e			l		l			o
//(00100110)(00100100)(00100000)(00000100)(01110100)
	i = 0;
	moving = 0;
	while (i <= len)
	{
		while (moving <= 7)
		{
			if ((str[i] >> moving) & 1) // записывается с конца
				kill(pid, SIGUSR1); // передает родителю единицы
				// printf("%d", l);
			else
				kill(pid, SIGUSR2);	//передает родителю нули
				// printf("%d", 0);
			moving++;
			// usleep(30);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	pid;

	pid = 0;
	if (argc == 3) 
	{
		pid = ft_atoi(argv[1]);
		do_zeros_and_ones(argv[2], ft_strlen(argv[2]), pid);
	}
	else 
		ft_putstr_fd("./client [pid] [msg]\n", 1);
	return (0);
}