/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexplor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:11:52 by hexplor           #+#    #+#             */
/*   Updated: 2023/12/26 16:06:47 by hexplor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../header/ft_printf.h"

static int	ft_ptr_format(va_list parameters_info)
{
	unsigned long long	ptr_check;
	int					count;

	count = 0;
	ptr_check = va_arg(parameters_info, unsigned long long);
	if (ptr_check == 0)
		count += pf_putstr_fd("(nil)", 1);
	else
	{
		count += pf_putstr_fd("0x", 1);
		count += pf_putptr_fd(ptr_check, 1);
	}
	return (count);
}

static int	ft_format_c(char s, va_list parameters_info)
{
	int	count;

	count = 0;
	if (s == 'c')
		count += pf_putchar_fd(va_arg(parameters_info, int), 1);
	else if (s == 'i' || s == 'd')
		count += pf_putnbr_fd(va_arg(parameters_info, long), 1);
	else if (s == 'u')
		count += pf_put_unsigned_nbr_fd(va_arg(parameters_info, \
					unsigned int), 1);
	else if (s == 's')
		count += pf_putstr_fd(va_arg(parameters_info, char *), 1);
	else if (s == 'x')
		count += pf_puthex_lower_fd(va_arg(parameters_info, long), 1);
	else if (s == 'X')
		count += pf_puthex_upper_fd(va_arg(parameters_info, long), 1);
	else if (s == 'p')
		count += ft_ptr_format(parameters_info);
	else if (s == '%')
		count += pf_putchar_fd('%', 1);
	return (count);
}

int	ft_printf(const char *s, ...)
{
	va_list			parameters_info;
	unsigned int	index;
	int				count;

	index = 0;
	count = 0;
	va_start(parameters_info, s);
	while (s[index])
	{
		if (s[index] == '%')
		{
			index++;
			count += ft_format_c(s[index], parameters_info);
		}
		else if (s[index] != '%' && s[index])
			count += pf_putchar_fd(s[index], 1);
		index++;
	}
	va_end(parameters_info);
	return (count);
}
