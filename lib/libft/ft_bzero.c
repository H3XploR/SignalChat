/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yantoine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:47:55 by yantoine          #+#    #+#             */
/*   Updated: 2023/11/09 15:02:31 by hexplor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdio.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	if (n <= 0)
		return ;
	ft_memset(s, 0, n);
}

/*int	main()
{
	void	mess[10] = "oui";

	ft_bzero()
	return (0);
}*/
