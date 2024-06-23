/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned_nbr_fd.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexplor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 23:56:02 by hexplor           #+#    #+#             */
/*   Updated: 2023/12/26 15:23:28 by hexplor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../header/ft_printf.h"

int	pf_put_unsigned_nbr_fd(unsigned int n, int fd)
{
	int		count;

	count = 0;
	if (n >= 10)
	{
		count += pf_put_unsigned_nbr_fd(n / 10, fd);
		count += pf_put_unsigned_nbr_fd(n % 10, fd);
	}
	else
	{
		count += pf_putchar_fd(n + '0', fd);
	}
	return (count);
}
