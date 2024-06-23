/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexplor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:16:11 by hexplor           #+#    #+#             */
/*   Updated: 2023/11/30 07:44:52 by yantoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_n_digit(int n)
{
	long	index;

	if (n == 0)
		return (1);
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

static void	ft_set_digit(long nbr_digit, long index, char *nbr, long n)
{
	char	digit[15];
	long	pow;

	if (n == 0)
	{
		*nbr = '0';
		*(nbr + 1) = 0;
		return ;
	}
	ft_set_number(digit);
	pow = ft_pow(nbr_digit);
	while (nbr_digit != 0)
	{
		*(nbr + index++) = digit[(n / pow) % 10];
		nbr_digit--;
		pow /= 10;
	}
	*(nbr + index++) = '\0';
}

char	*ft_itoa(int n)
{
	char	*nbr;
	long	index;
	long	n2;
	long	nbr_digit;

	n2 = (long) n;
	nbr_digit = ft_n_digit(n);
	index = 0;
	if (n2 < 0)
	{
		nbr = ft_calloc((nbr_digit + 2), 1);
		if (!nbr)
			return (NULL);
		*(nbr + index++) = '-';
		n2 *= -1;
	}
	else
	{
		nbr = ft_calloc((nbr_digit + 1), 1);
		if (!nbr)
			return (NULL);
	}
	ft_set_digit(nbr_digit, index, nbr, n2);
	return (nbr);
}
