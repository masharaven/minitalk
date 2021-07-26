
//A server that receives data in binary format

#include "./libft/libft.h"

static t_fl msg;

void	from_zero_and_ones(int unobit)
{
	// msg.size = 0;
	msg.c = msg.c + ((unobit & 1) << msg.size);
	msg.size++;
	// {
	// 	msg.c = msg.c + ((unobit & 1) << msg.size);
	// 	msg.size++;
	if (msg.size == 8)
	{
		ft_putchar_fd(msg.c, 1);
		// ft_putstr_fd("\n", 1);
		msg.c = 0;
		msg.size = 0;
	}
	usleep(30);
}
	
	

int main(int argc, char **argv)
{
	int	pid;

	(void)argv;
	pid = 0;
	if (argc == 1)
	{
		pid = getppid();
		if (pid != 0)
		{
			ft_putstr_fd("PID: ", 1);
			ft_putnbr_fd(pid, 1);
			ft_putstr_fd("\n", 1);
			while (1)
			{
				signal(SIGUSR1, from_zero_and_ones);
				signal(SIGUSR2, from_zero_and_ones);
				pause();
			}

		}
		else //check for wrong pid
			ft_putstr_fd("what's the shit?!", 1);
	}
	else 
	{
		ft_putstr_fd("wrong number of arguments!\n", 1);
	}
	return (0);
}
