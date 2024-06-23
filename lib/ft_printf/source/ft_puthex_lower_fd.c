/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_lower_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexplor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:23:28 by hexplor           #+#    #+#             */
/*   Updated: 2023/12/26 15:24:01 by hexplor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../header/ft_printf.h"

int	pf_puthex_lower_fd(unsigned int n, int fd)
{
	int		i;
	char	*hex;

	i = 0;
	hex = "0123456789abcdef";
	if (n >= 16)
	{
		i += pf_puthex_lower_fd(n / 16, fd);
		i += pf_puthex_lower_fd(n % 16, fd);
	}
	else
		i += pf_putchar_fd(hex[n], fd);
	return (i);
}
