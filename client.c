/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <aechafii@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 17:31:58 by aechafii          #+#    #+#             */
/*   Updated: 2022/05/29 19:24:01 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "minitalk.h"

void    send_signal(int pid, char ch)
{
    int i;
    
    i = 7;
    while(i >= 0)
    {    
        if((ch >> i) & 1)
            kill(pid, SIGUSR1);
        else
            kill(pid, SIGUSR2);
        i--;
        usleep(500);
    }
}

int main(int argc, char **argv)
{
    if(argc == 3)
    {
        int i;
        int server_pid;
        
        server_pid = ft_atoi(argv[1]);
        i = 0;
        while(argv[2][i])
            send_signal(server_pid, argv[2][i++]);   
    }
    else
        ft_putstr("Invalid parameters!");
}