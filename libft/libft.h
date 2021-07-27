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

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h> 
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

size_t	ft_strlen(const char *s);
int		ft_atoi(const char *g);
int		ft_isdigit(int c);
char	*ft_strdup(const char *str);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif