/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexplor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:13:56 by hexplor           #+#    #+#             */
/*   Updated: 2023/11/09 12:45:23 by yantoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	index;
	int		index2;

	if (dest > src)
	{
		index2 = n - 1;
		while (index2 >= 0)
		{
			*(unsigned char *)(dest + index2) = \
			*(unsigned char *)(src + index2);
			index2--;
		}
	}
	else
	{
		index = 0;
		while (index < n)
		{
			*(unsigned char *)(dest + index) = *(unsigned char *)(src + index);
			index++;
		}
	}
	return (dest);
}
