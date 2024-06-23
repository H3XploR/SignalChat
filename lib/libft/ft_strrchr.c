/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yantoine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 08:02:01 by yantoine          #+#    #+#             */
/*   Updated: 2023/11/29 14:34:30 by hexplor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = 0;
	while (*s)
	{
		len++;
		s++;
	}
	if (c == '\0' && *s == '\0')
		return ((char *)s);
	while (len >= 0)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s--;
		len--;
	}
	return (NULL);
}
