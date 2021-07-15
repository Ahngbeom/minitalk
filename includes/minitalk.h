#ifndef MINITALK_H
# define MINITALK_H

# include "libft.h"
# include <unistd.h>
# include <signal.h>

struct sigaction server_act;
struct sigaction client_act;

typedef struct s_data {
    pid_t    opponent_pid;
    char    *msg;
}   t_data;

extern t_data g_server_data;
extern t_data g_client_data;

// Server Handler
void    hdr_client_with_connection(int signo, siginfo_t *siginfo, void *context);
void    hdr_receive_message(int signo, siginfo_t *siginfo, void *context);

// Server Function
char	*ft_charjoin(char *str, char ch);

// Client Handler
void    hdr_server_with_connection(int signo, siginfo_t *siginfo, void *context);
void    hdr_send_message(int signo, siginfo_t *siginfo, void *context);

// Client Function
void    ft_server_with_connection(pid_t pid);
void    ft_send_message();

#endif