/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexplor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:24:20 by hexplor           #+#    #+#             */
/*   Updated: 2023/12/26 15:25:19 by hexplor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

int	pf_putstr_fd(char *s, int fd)
{
	unsigned int	i;
	int				count;

	if (!s)
	{
		pf_putstr_fd("(null)", fd);
		return (6);
	}
	i = 0;
	count = 0;
	while (*(s + i))
	{
		count += pf_putchar_fd(*(s + i), fd);
		i++;
	}
	return (count);
}
