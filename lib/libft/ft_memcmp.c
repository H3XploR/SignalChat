/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yantoine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 10:08:42 by yantoine          #+#    #+#             */
/*   Updated: 2023/11/13 16:23:41 by hexplor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			index;

	index = 0;
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (index < n)
	{
		if (*(p1 + index) != *(p2 + index))
			return ((*(p1 + index) - *(p2 + index)));
		index++;
	}
	return (0);
}

/*int	main()
{
	ft_memcmp("001270", "coucou", 7);
	return (0);
}*/
