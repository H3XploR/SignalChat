/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexplor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:06:15 by hexplor           #+#    #+#             */
/*   Updated: 2023/11/29 13:19:56 by hexplor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_word(char	*str, char c)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str != c && *str)
			count++;
		while (*str && *str != c)
			str++;
	}
	return (count);
}

static size_t	len_word(char *s, char c, size_t start)
{
	size_t	i;

	i = 0;
	while (s[start] && s[start] != c)
	{
		i++;
		start++;
	}
	return (i);
}

static void	free_array(char **s1)
{
	size_t	i;

	i = 0;
	while (s1[i])
	{
		free(s1[i]);
		i++;
	}
	free(s1);
}

static char	**divisor(char *str1, char c, char **array, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < len)
	{
		while (str1[j] && str1[j] == c)
			j++;
		array[i] = ft_substr(str1, j, len_word(str1, c, j));
		if (!array[i])
		{
			free_array(array);
			return (NULL);
		}
		while (str1[j] && str1[j] != c)
			j++;
		i++;
	}
	array[i] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**array;

	if (!s)
		return (NULL);
	words = count_word((char *)s, c);
	array = (char **)malloc((words + 1) * (sizeof(char *)));
	if (!array)
		return (NULL);
	array = divisor((char *)s, c, array, words);
	return (array);
}
/*
int	main()
{
	char	**list;

	list = ft_split("--1-2--3---4----5-----42", '-');
	for (int i = 0; list[i] != NULL; ++i)
                free(list[i]);
	free(list);
	return (0);
}
*/
