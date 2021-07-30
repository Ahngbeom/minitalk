/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_lf_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahn <bbu0704@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 14:23:07 by bahn              #+#    #+#             */
/*   Updated: 2021/07/30 21:25:19 by bahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

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
