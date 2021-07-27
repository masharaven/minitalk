/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccade <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 13:59:18 by ccade             #+#    #+#             */
/*   Updated: 2021/07/27 13:59:43 by ccade            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//A server that receives data in binary format
#include "push_swap.h"

static t_fl	g_message;

void	from_zero_and_ones(int unobit)
{
	g_message.c = g_message.c + ((unobit & 1) << g_message.size);
	g_message.size++;
	if (g_message.size == 8)
	{
		ft_putchar_fd (g_message.c, 1);
		if (!g_message.c)
			ft_putstr_fd("\n", 1);
		g_message.c = 0;
		g_message.size = 0;
	}
}

int	main(void)
{
	pid_t	pid;

	g_message.c = 0;
	g_message.size = 0;
	pid = getpid();
	if (pid != 0)
	{
		ft_putstr_fd("PID: ", 1);
		ft_putnbr_fd(pid, 1);
		ft_putstr_fd("\n", 1);
	}
	else
		ft_putstr_fd("what's the shit?!", 1);
	while (1)
	{
		signal(SIGUSR1, from_zero_and_ones);
		signal(SIGUSR2, from_zero_and_ones);
		pause();
	}
	return (0);
}
