/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bbu0704@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 23:55:31 by root              #+#    #+#             */
/*   Updated: 2021/07/15 17:46:10 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

t_data g_server_data;

int main()
{
    server_act.sa_sigaction = hdr_client_with_connection;
    sigemptyset(&server_act.sa_mask);
    server_act.sa_flags = SA_SIGINFO;
    sigaction(SIGUSR1, &server_act, NULL);
    sigaction(SIGUSR2, &server_act, NULL);
    
    ft_putnbr_fd(getpid(), 1);
    ft_putchar_fd('\n', 1);

    g_server_data.msg = ft_strdup("");
    while(1)
    {
        pause();
    }
}