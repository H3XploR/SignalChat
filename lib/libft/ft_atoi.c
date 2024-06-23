/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexplor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:57:24 by hexplor           #+#    #+#             */
/*   Updated: 2023/11/27 22:23:38 by hexplor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' \
	|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

static int	ft_fsign(char c)
{
	if (c == '-')
		return (-1);
	return (1);
}

int	ft_atoi(const char *text)
{
	long	sign;
	long	number;

	number = 0;
	sign = 1;
	while (ft_isspace(*text) == 1)
		text++;
	if (*text == '-' || *text == '+')
	{
		sign = ft_fsign(*text);
		text++;
	}
	while (ft_isdigit(*text) == 1)
	{
		number *= 10;
		number += *text - '0';
		text++;
	}
	return (sign * number);
}
/*
#include <stdlib.h>
#include <limits.h>
int main(void)
{
	
	char	*texte1 = "12";
	char	*texte2 = "+12";
	char	*texte3 = "-12";

	char	*texte4 = " 	\t\n\v\f\r12";
	char	*texte5 = " 	\t\n\v\f\r+12";
	char	*texte6 = " 	\t\n\v\f\r-12";

	char	*texte7 = "--12";
	char	*texte8 = "++12";
	char	*texte9 = "abcd7";

	char	*texte10 = "12abs";
	char	*texte11 = "";
	char	*texte12 = "0";
	char	*texte13 = "-2147483649";
	char	*texte14 = "2147483649";

	if (ft_atoi(texte1) != 12)
		printf("1: NON\n");
	if(ft_atoi(texte2) != 12)
		printf("2: NON\n");
	if(ft_atoi(texte3) != -12)
		printf("3: NON\n");
	if(ft_atoi(texte4) != 12)
		printf("4: NON\n");
	if(ft_atoi(texte5) != 12)
		printf("5: NON\n");
	if(ft_atoi(texte6) != -12)
		printf("6: NON\n");
	if(ft_atoi(texte7) != 0)
		printf("7: NON\n");
	if(ft_atoi(texte8) != 0)
		printf("8: NON\n");
	if(ft_atoi(texte9) != 0)
		printf("9: NON\n");
	if(ft_atoi(texte10) != 12)
		printf("10: NON\n");
	if(ft_atoi(texte11) != 0)
		printf("11: NON\n");
	if(ft_atoi(texte12) != 0)
		printf("12: NON\n");
	if(ft_atoi(texte13) != -2147483649L)
		printf("13: NON\n");
	if(ft_atoi(texte14) != 2147483649L)
		printf("14: NON\n");
	write(1, "\n", 1);
	return (0);
}*/
