/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisen <sisen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:13:33 by sisen             #+#    #+#             */
/*   Updated: 2023/04/28 21:39:18 by sisen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void    signal_to_char(int sig)
{
    static int i = 7;
    static char c;

    c += sig << i;
    if (i == 0)
    {
        i = 7;
        ft_putchar_fd(c, 1);
        c = 0;
    }
    else
        i--;
    
}

void    sig_handler(int sig)
{
    if(sig == SIGUSR1)
        signal_to_char(1);
    else if (sig == SIGUSR2)
        signal_to_char(0);
}

int main(void)
{
    int pid;
    
    pid = getpid();
    ft_putstr_fd("PID NUMBER => ", 1);
    ft_putnbr_fd(pid, 1);
    signal(SIGUSR1, sig_handler);
    signal(SIGUSR2, sig_handler);
    while(1)
        pause();
}