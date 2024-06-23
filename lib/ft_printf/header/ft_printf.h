/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yantoine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 10:18:58 by yantoine          #+#    #+#             */
/*   Updated: 2023/12/26 16:09:17 by hexplor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdarg.h>

int			pf_puthex_lower_fd(unsigned int n, int fd);
int			pf_puthex_upper_fd(unsigned int n, int fd);
int			ft_printf(const char *format, ...);
int			pf_putchar_fd(char c, int fd);
int			pf_putstr_fd(char *s, int fd);
int			pf_putnbr_fd(long int n, int fd);
int			pf_put_unsigned_nbr_fd(unsigned int n, int fd);
int			pf_putptr_fd(unsigned long long n, int fd);

#endif
