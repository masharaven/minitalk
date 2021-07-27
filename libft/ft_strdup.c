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

#include "libft.h"
char	*ft_strdup(const char *str)
{
	int		i;
	int		length;
	char	*dst;

	i = 0;
	length = ft_strlen(str);
	dst = (char *)malloc((length + 1) * sizeof(char));
	if (dst)
	{
		while (i <= length)
		{
			dst[i] = str[i];
			i++;
		}
		return (dst);
	}
	else
		return (NULL);
}
