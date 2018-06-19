/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drecours <drecours@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 19:16:31 by drecours          #+#    #+#             */
/*   Updated: 2018/06/19 19:51:25 by drecours         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_ssl.h"

int		main(int ac, char **av)
{
	(void)av;
	if (ac < 2)
		return (no_arg());
	write(STDERR_FILENO, "di", 2);
	return (0);
}
