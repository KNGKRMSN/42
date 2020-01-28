/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprudhom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 11:55:04 by mprudhom          #+#    #+#             */
/*   Updated: 2020/01/22 16:01:00 by mprudhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_1stread(av[1]);
		printf("program runned succesfully\n");

	}
	else 
		printf("error\n");
	return (0);
}
