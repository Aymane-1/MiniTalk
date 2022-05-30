/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_bonus.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <aechafii@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 22:16:26 by aechafii          #+#    #+#             */
/*   Updated: 2022/05/30 22:19:40 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_BONUS_H
#define MINITALK_BONUS_H

# include <unistd.h>
# include <signal.h>

void    ft_putchar(char c);
void    ft_putstr(char *str);
void    ft_putnbr(int n);
int	    ft_isdigit(int c);
int     ft_atoi(const char *str);
void    message_confirmation(int signal);
void    send_signal(int pid, char ch);
void    print_and_reset(int *ascii_value, int *i);

#endif