/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <aechafii@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 17:32:25 by aechafii          #+#    #+#             */
/*   Updated: 2022/05/31 21:01:27 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	g_pid = 0;

void	handler(int signal, siginfo_t *info, void *p)
{
	static int	ascii_value;
	static int	i;

	(void) p;
	if (g_pid != info->si_pid)
	{
		i = 0;
		ascii_value = 0;
		g_pid = info->si_pid;
	}
	ascii_value *= 2;
	if (signal == SIGUSR1)
	ascii_value += 1;
	else
		ascii_value += 0;
	i++;
	if (i == 8)
	{
		ft_putchar(ascii_value);
		ascii_value = 0;
		i = 0;
	}
}

int	main(int argc, char **argv)
{
	struct sigaction	strct;

	if (argc == 1)
	{
		strct.__sigaction_u.__sa_sigaction = &handler;
		(void)argv;
		g_pid = getpid();
		ft_putstr("THE PID IS: ");
		ft_putstr("\033[0;32m");
		ft_putnbr(g_pid);
		ft_putstr("\033[0m");
		ft_putstr("\n");
		sigaction(SIGUSR1, &strct, NULL);
		sigaction(SIGUSR2, &strct, NULL);
		while (1)
			sleep(1);
	}
	else
		ft_putstr("\033[0;31mNo parameters allowed after the executable");
}
