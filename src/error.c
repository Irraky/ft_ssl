/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drecours <drecours@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 19:48:47 by drecours          #+#    #+#             */
/*   Updated: 2018/06/19 19:50:32 by drecours         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_ssl.h"

int	no_arg(void)
{
	ft_putstr_fd("usage: ft_ssl command [command opts] [command args]",
		STDERR_FILENO);
	return (1);
}
