/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexplor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:24:33 by hexplor           #+#    #+#             */
/*   Updated: 2023/11/30 08:53:17 by yantoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	char	*tab;
	size_t	sizemax;

	sizemax = n * size;
	if (size && sizemax / size < n)
		return (NULL);
	if (n == 0 || size == 0)
	{
		tab = malloc(1);
		return (tab);
	}
	tab = malloc(n * size);
	if (!tab)
		return (NULL);
	ft_bzero(tab, n * size);
	return (tab);
}
/*#include <limits.h>
int	main()
{
	void	*p;

	p = ft_calloc(SIZE_MAX, SIZE_MAX);
	free(p);
	return (0);
}*/
