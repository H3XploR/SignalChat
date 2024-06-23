/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexplor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 09:02:08 by hexplor           #+#    #+#             */
/*   Updated: 2023/11/10 09:54:44 by hexplor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (dest[i] && i < size)
		i++;
	while (src[k] && (i + k + 1) < size)
	{
		dest[i + k] = src[k];
		k++;
	}
	if (i < size)
		dest[i + k] = '\0';
	return (i + ft_strlen(src));
}

/*int	main()
{
	char	mess1[10] = "oui";
	char	mess2[10] = "non";

	ft_strlcat(mess1, mess2, 3);
	return (0);
}*/
