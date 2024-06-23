/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexplor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 23:41:52 by hexplor           #+#    #+#             */
/*   Updated: 2023/12/26 15:24:42 by hexplor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

int	pf_putnbr_fd(long int n, int fd)
{
	int			count;

	count = 0;
	if (n < 0)
	{
		n = -n;
		count += pf_putchar_fd('-', fd);
	}
	if ((n / 10) > 0)
		count += pf_putnbr_fd(n / 10, fd);
	pf_putchar_fd((n % 10) + 48, fd);
	return (count + 1);
}
