/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yantoine <yantoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:51:00 by yantoine          #+#    #+#             */
/*   Updated: 2024/05/17 16:13:47 by yantoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	pausing(int signum)
{
	(void)signum;
}

static void	send_bits(int pid, char c)
{
	int	bit;

	usleep(50);
	bit = 0;
	while (bit < 8)
	{
		if ((c & (0x01 << bit)) != 0)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		signal(SIGUSR1, pausing);
		pause();
		bit++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc != 3 || !ft_strlen(argv[2]) || ft_atoi(argv[1]) <= 0)
		return (1);
	i = 0;
	while (argv[2][i] != '\0')
	{
		send_bits(ft_atoi(argv[1]), argv[2][i]);
		i++;
	}
	send_bits(ft_atoi(argv[1]), '\n');
	send_bits(ft_atoi(argv[1]), '\0');
}
