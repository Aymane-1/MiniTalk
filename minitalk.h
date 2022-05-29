/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <aechafii@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 17:29:42 by aechafii          #+#    #+#             */
/*   Updated: 2022/05/29 18:34:38 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
#define MINITALK_H

# include <unistd.h>
# include <signal.h>

void    ft_putchar(char c);
void    ft_putstr(char *str);
void    ft_putnbr(int n);
int	    ft_isdigit(int c);
int     ft_atoi(const char *str);

#endif