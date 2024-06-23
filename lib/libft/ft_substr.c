/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexplor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 20:04:44 by hexplor           #+#    #+#             */
/*   Updated: 2023/11/30 08:45:42 by yantoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	if (len > ft_strlen(s) - start)
	{
		len = ft_strlen(s) - start;
	}
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	str = (char *)malloc(((sizeof(char) * (len + 1))));
	if (!str)
		return (NULL);
	while (i < len && s[start] != '\0')
	{
		str[i++] = s[start++];
	}
	str[i] = '\0';
	return (str);
}
/*
int	main()
{
	char	*text;

	text = ft_substr("tripouille", 100, 1);
	free(text);
	return (0);
}*/
