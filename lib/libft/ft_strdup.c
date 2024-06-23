/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexplor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:58:53 by hexplor           #+#    #+#             */
/*   Updated: 2023/11/29 14:52:09 by hexplor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		index;

	s2 = (char *)ft_calloc(ft_strlen(s1) + 1, 1);
	if (s2 == NULL)
		return (NULL);
	index = 0;
	while (*(s1 + index))
	{
		*(s2 + index) = *(s1 + index);
		index++;
	}
	*(s2 + index) = '\0';
	return (s2);
}

/*int	main()
{
	char	*dest;

	dest = ft_strdup("BONJOUR");
	dest = ft_strdup("");
	dest = ft_strdup("\0");
	return (0);
}*/
