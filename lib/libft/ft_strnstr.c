/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yantoine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 12:16:17 by yantoine          #+#    #+#             */
/*   Updated: 2023/11/27 22:29:37 by hexplor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*b;

	b = (char *) big;
	i = 0;
	if (little[i] == '\0' || little == NULL)
		return (b);
	if (len == 0)
		return (0);
	while (b[i] != '\0' && i < len)
	{
		j = 0;
		while (little[j] && (i + j) < len)
		{
			if (b[i + j] == little[j])
				j++;
			else
				break ;
		}
		if (little[j] == 0)
			return (&b[i]);
		i++;
	}
	return (0);
}
/*int	main()
{
	ft_strnstr("aaabcabcd", "abcd", -1);
	return (0);
}*/
