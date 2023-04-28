/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisen <sisen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:13:25 by sisen             #+#    #+#             */
/*   Updated: 2023/04/28 20:29:42 by sisen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
# include <signal.h>
# include <stdlib.h>
# include <unistd.h>

int     ft_atoi(const char *str);
void    send_signal(int ch, int pid);
void    ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);
void    signal_to_char(int sig);
void    sig_handler(int sig);
void	ft_putstr_fd(char *s, int fd);
#endif