/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <aechafii@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 17:31:58 by aechafii          #+#    #+#             */
/*   Updated: 2022/06/02 21:58:46 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	send_signal(int pid, char ch)
{
	int	i;
	int	check;

	i = 7;
	while (i >= 0)
	{
		if ((ch >> i) & 1)
			check = kill(pid, SIGUSR1);
		else
			check = kill(pid, SIGUSR2);
		i--;
		usleep(800);
	}
	if (check != 0)
	{	
		ft_putstr("\033[0;31mINVALID PID!");
		exit (0);
	}
	else
		return (0);
}

int	is_alldigit(char *s)
{
	int	i;

	i = -1;
	while (s[++i])
		if (!ft_isdigit(s[i]))
			return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	server_pid;

	if (argc == 3)
	{
		i = 0;
		while (argv[i] != NULL)
		{
			printf("%c\n", argv[1][i]);
			i++;
		}
		server_pid = ft_atoi(argv[1]);
		i = 0;
		if (argv[1][0] == '0' || (!is_alldigit(argv[1])))
		{
			ft_putstr("\033[0;31mINVALID PID!");
			exit (0);
		}	
		while (argv[2][i])
			send_signal(server_pid, argv[2][i++]);
		send_signal(server_pid, argv[2][i]);
	}
	else
		ft_putstr("\033[0;31mInvalid parameters!");
}
