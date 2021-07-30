/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_lf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bbu0704@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 14:23:07 by bahn              #+#    #+#             */
/*   Updated: 2021/07/30 21:12:55 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_putstr_lf(char *str)
{
	char	lf;

	lf = '\n';
	while (str && *str != '\0')
	{
		write(1, str++, 1);
	}
	write(1, &lf, 1);
}
