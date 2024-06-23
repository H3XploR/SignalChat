/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexplor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:07:02 by hexplor           #+#    #+#             */
/*   Updated: 2023/11/29 15:22:10 by hexplor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*chaine;

	chaine = (char *)s;
	while (*chaine)
	{
		if (*chaine == (unsigned char)c)
			return (chaine);
		chaine++;
	}
	if (c == '\0')
		return (chaine);
	return (NULL);
}
