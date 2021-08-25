/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprud-ho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 18:39:07 by mprud-ho          #+#    #+#             */
/*   Updated: 2021/08/25 17:53:34 by mprud-ho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	neg;

	i = 0;
	res = 0;
	neg = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		while (str[i] == '-')
			neg *= -neg;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 - (str[i] + 48)
	}
}

void	ft_putnbr(int nbr)
{

int	ft_check(char *nb1, char *sign, char *nb2)
{
	int	i;
	int check;

	i = 0;
	check = 
	while (nb1[i])
	{
		if (nb1[i] >= '0' && nb1[i] <= '9')
		{
			check++;
			break ;
		}
		i++;
	}
	i = 0;
	while (nb2[i])
	{
		if (nb2[i] >= '0' && nb[i] <= '9')
		{
			check++;
			break ;
		}
		i++;
	}
	if (check == 2)
		return (1);
}

int	main(int ac, char **av)
{
	int	i;
	
	i = ;
	if (ac == 4)
	{
		ft_check(av[1], av[2], av[3]);
	}
}
