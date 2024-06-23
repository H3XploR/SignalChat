/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexplor <hexplor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 22:48:59 by yantoine          #+#    #+#             */
/*   Updated: 2024/05/13 21:22:13 by hexplor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

char	*g_str;

static void	print_hello(void)
{
	ft_printf("                               , ----.\n");
	ft_printf("                              -  -     `\n");
	ft_printf("                        ,__.,'           \\\n");
	ft_printf("                      .'                 *`\\\n");
	ft_printf("                     /       |   |     / **\\\n");
	ft_printf("                    .                 / ****.\n");
	ft_printf("                    |    mm           | ****|\n");
	ft_printf("                     \\                | ****|\n");
	ft_printf("                      ` ._______      \\ ****/\n");
	ft_printf("                               \\      /`---'\n");
	ft_printf("                                 \\___(\n");
	ft_printf("                                 /~~~~\\\n");
	ft_printf("                                /      \\\n");
	ft_printf("                               /      | \\\n");
	ft_printf("                              |       |  \\\n");
	ft_printf("                    , ~~ .    |, ~~ . |  |\\\n");
	ft_printf("                   ( |||| )   ( |||| )(,,,)`\n");
	ft_printf("                  ( |||||| )-( |||||| )    | ^\n");
	ft_printf("                  ( |||||| ) ( |||||| )    |'/\n");
	ft_printf("                  ( |||||| )-( |||||| )___,'-\n");
	ft_printf("                   ( |||| )   ( |||| )\n");
	ft_printf("                    ` ~~ '     ` ~~ '\n");
}

char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static char	*add_char_to_string(char *str, char c)
{
	int		len;
	char	*new_str;

	len = 0;
	new_str = NULL;
	if (str == NULL)
	{
		str = (char *)malloc(2 * sizeof(char));
		str[0] = c;
		str[1] = '\0';
	}
	else
	{
		len = ft_strlen(str);
		new_str = (char *)malloc((len + 2) * sizeof(char));
		ft_strcpy(new_str, str);
		new_str[len] = c;
		new_str[len + 1] = '\0';
		free(str);
		str = new_str;
	}
	return (str);
}

static void	action(int signum, siginfo_t *info, void *context)
{
	static int	current_byte;
	static int	bit_count;

	(void)context;
	if (signum == SIGUSR1)
		current_byte |= (0x01 << bit_count);
	bit_count++;
	if (bit_count == 8)
	{
		if (current_byte == '\0')
		{
			ft_printf("%s", g_str);
			free(g_str);
			g_str = NULL;
			kill(info->si_pid, SIGUSR1);
			current_byte = 0;
			bit_count = 0;
			return ;
		}
		g_str = add_char_to_string(g_str, current_byte);
		current_byte = 0;
		bit_count = 0;
	}
	usleep(50);
	kill(info->si_pid, SIGUSR1);
}

int	main(void)
{
	struct sigaction	sa;

	print_hello();
	sa.sa_sigaction = action;
	sa.sa_flags = SA_SIGINFO;
	ft_printf("pid: %d\n", getpid());
	while (1)
	{
		sigaction(SIGUSR1, &sa, NULL);
		sigaction(SIGUSR2, &sa, NULL);
		pause();
	}
	return (0);
}
