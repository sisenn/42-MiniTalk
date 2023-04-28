/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_bonus.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisen <sisen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 21:42:21 by sisen             #+#    #+#             */
/*   Updated: 2023/04/28 21:44:24 by sisen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_BONUS_H
# define MINITALK_BONUS_H
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