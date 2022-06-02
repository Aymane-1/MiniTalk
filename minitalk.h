/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <aechafii@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 17:29:42 by aechafii          #+#    #+#             */
/*   Updated: 2022/06/02 18:46:40 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <unistd.h>
# include <signal.h>
# include <stdio.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int n);
int		ft_isdigit(int c);
int		ft_atoi(const char *str);
void	message_confirmation(int signal);
int		send_signal(int pid, char ch);
void	print_and_reset(int *ascii_value, int *i);
int		is_alldigit(char *s);

#endif