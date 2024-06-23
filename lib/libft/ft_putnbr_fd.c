/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexplor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:41:48 by hexplor           #+#    #+#             */
/*   Updated: 2023/11/27 22:27:06 by hexplor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_n_digit(int n)
{
	long	index;

	index = 0;
	while (n != 0)
	{
		n /= 10;
		index++;
	}
	return (index);
}

static int	ft_pow(int n)
{
	long	index;

	index = 1;
	while (n != 0)
	{
		index *= 10;
		n--;
	}
	return (index / 10);
}

static void	ft_set_number(char *tab)
{
	long	index;

	index = 0;
	while (index != 11)
	{
		tab[index] = index + '0';
		index++;
	}
	tab[index] = '\0';
}

static void	ft_set_digit(long nbr_digit, long n, int fd)
{
	char	digit[15];
	long	pow;

	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	ft_set_number(digit);
	pow = ft_pow(nbr_digit);
	while (nbr_digit != 0)
	{
		ft_putchar_fd(digit[(n / pow) % 10], fd);
		nbr_digit--;
		pow /= 10;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	long	n2;
	long	nbr_digit;

	n2 = (long) n;
	nbr_digit = ft_n_digit(n);
	if (n2 < 0)
	{
		ft_putchar_fd('-', fd);
		n2 *= -1;
	}
	ft_set_digit(nbr_digit, n2, fd);
}
