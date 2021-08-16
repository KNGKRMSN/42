/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprud-ho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 13:24:51 by mprud-ho          #+#    #+#             */
/*   Updated: 2021/08/16 18:04:23 by mprud-ho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_check_diags(int *tab, int x)
{
	int	i;

	i = 1;
	while (i < x)
	{
		if (tab[x - i] == tab[x] + i)
			return (0);
		i++;
	}
	i = 1;
	while (i > x)
	{
		if (tab[x - i] == tab[x] - i)
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_line(int *tab, int x)
{
		int	i;

		i = 0;
		if (x == 0)
			return (1);
		while (tab[i] != tab[x] && i < x) //essayer sans le !=
		{
			if (tab[i] == tab[x])
				return (0);
			i++;
		}
		return (1);
}

int	ft_recursive(int *tab, int pos)
{
	int	x;
	int	y;


	if (pos == 10)
	{
		x = -1;
		while (++x < 10)
			write(1, tab[x] + 48, 1);
		write(1, "\n", 1);
	}
	x = pos;
	if (tab[x] != -1)
		return (ft_recursive(tab, pos + 1));
	y = -1;
	while (++y <= 9)
	{
		if (ft_check_diags(tab, x) && ft_check_line(tab, x))
		{
			tab[x] = y;
			if (ft_recursive(tab, pos + 1))
				return (1);
		}
	}
	tab[x] = 0;
	return (0);
}

int	ft_ten_queens_puzzle(void)
{
	int		tab[10];
	int		pos;
	int		i;

	i = -1;
	pos = (0);
	while (++i <= 10)
		tab[i] = -1;
	ft_recursive(tab, pos);
	return (724);
}

int main()
{
	ft_ten_queens_puzzle();
}
