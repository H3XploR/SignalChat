/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexplor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:14:08 by hexplor           #+#    #+#             */
/*   Updated: 2023/12/26 15:25:02 by hexplor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../header/ft_printf.h"

int	pf_putptr_fd(unsigned long long n, int fd)
{
	int	len;

	len = 0;
	if (n >= 16)
	{
		len += pf_putptr_fd(n / 16, fd);
		len += pf_putptr_fd(n % 16, fd);
	}
	else
	{
		if (n < 10)
			len += pf_putchar_fd(n + '0', fd);
		else
			len += pf_putchar_fd(n + 'a' - 10, fd);
	}
	return (len);
}
