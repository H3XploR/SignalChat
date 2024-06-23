/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yantoine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 08:46:16 by yantoine          #+#    #+#             */
/*   Updated: 2023/11/30 09:28:36 by yantoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;

	index = 0;
	while (*(unsigned char *)(s1 + index) && \
		*(unsigned char *)(s2 + index) && index < n)
	{
		if (*(s1 + index) != *(s2 + index))
			return (*(s1 + index) - *(s2 + index));
		index++;
	}
	return (0);
}
