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

#include "push_swap.h"

void	do_zeros_and_ones(char *str, int len, int pid)
{
	int	i;
	int	moving;

	i = 0;
	while (i <= len)
	{
		moving = 0;
		while (moving <= 7)
		{
			if ((str[i] >> moving) & 1)
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			moving++;
			usleep(30);
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
