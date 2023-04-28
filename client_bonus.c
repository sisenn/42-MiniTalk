/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisen <sisen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 21:43:34 by sisen             #+#    #+#             */
/*   Updated: 2023/04/28 21:43:50 by sisen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

void    show_error(int err)
{
    if (err == 0)
        ft_putstr_fd("Your argument count is wrong", 1);
    else if (err == 1)
        ft_putstr_fd("Unreachable pid number", 1);
    else if (err == 2)
        ft_putstr_fd("Wrong pid format", 1);
    exit(1);
}

void    send_signal(int ch, int pid)
{
    unsigned char c;
    int i;
    
    c = ch;
    i = 128;
    while(i > 0)
    {
        if(c >= i)
        {
           if (kill(pid, SIGUSR1) == -1)
                show_error(1);
            c -= i;
        }
        else
            if (kill(pid, SIGUSR2) == -1)
                show_error(1);
        i /= 2;
        usleep(100);
    }
}

int main(int argc, char **argv)
{
    if (argc == 3)
    {
   int i;
   int pid;

    i = 0;
    while (argv[1][i])
    {
        if (argv[1][i] < '0' || argv[1][i] > '9' )
            show_error(2);
        i++;
    }
    i = 0;
    pid = ft_atoi(argv[1]);
    while(argv[2][i])
        send_signal(argv[2][i++], pid);
    }
    else
        show_error(0);
}