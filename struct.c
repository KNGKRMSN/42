/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprudhom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 19:05:53 by mprudhom          #+#    #+#             */
/*   Updated: 2020/01/28 21:02:17 by mprudhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_place(int *tmp, int *tetri)
{
	char	a;

	a = 'A';
	t_tetris	*tmp;

	tmp = malloc(sizeof(t_list));
	if (tmp)
	{
		
	}
}

int	ft_compare(int *tmp)
{
	
	if (ft_memcmp(tmp, S_tetri, sizeof(tmp)) == 0)
		ft_place(tmp, S_tetri);
	if (ft_memcmp(tmp, SL_tetri, sizeof(tmp)) == 0)
		ft_place(tmp, SL_tetri);
	if (ft_memcmp(tmp, Z_tetri, sizeof(tmp)) == 0)
		ft_place(tmp, Z_tetri);
	if (ft_memcmp(tmp, ZL_tetri, sizeof(tmp)) == 0)
		ft_place(tmp, ZL_tetri);
	else
		return (-1);
	return (0);
}

int	ft_compare(int *tmp)
{
	if (ft_memcmp(tmp, I_tetri, sizeof(tmp)) == 0)
		ft_place(tmp, I_tetri);
	if (ft_memcmp(tmp, IH_tetri, sizeof(tmp)) == 0)
		ft_place(tmp, IH_tetri);
	if (ft_memcmp(tmp, O_tetri, sizeof(tmp)) == 0)
		ft_place(tmp, O_tetri);
	if (ft_memcmp(tmp, L_tetri, sizeof(tmp)) == 0)
		ft_place(tmp, L_tetri);
	if (ft_memcmp(tmp, LD_tetri, sizeof(tmp)) == 0)
		ft_place(tmp, LD_tetri);
	if (ft_memcmp(tmp, LHD_tetri, sizeof(tmp)) == 0)
		ft_place(tmp, LHD_tetri);
	if (ft_memcmp(tmp, T_tetri, sizeof(tmp)) == 0)
		ft_place(tmp, T_tetri);
	if (ft_memcmp(tmp, TD_tetri, sizeof(tmp)) == 0)
		ft_place(tmp, TD_tetri);
	if (ft_memcmp(tmp, TL_tetri, sizeof(tmp)) == 0)
		ft_place(tmp, TL_tetri);
	if (ft_memcmp(tmp, TR_tetri, sizeof(tmp)) == 0)
		ft_place(tmp, TR_tetri);
	if (ft_memcmp(tmp, LH_tetri, sizeof(tmp)) != 0)
		ft_place(tmp, LH_tetri);
	else
		if ((ft_compare2(int *tmp)) == -1)
			return (-1)
	return (0);
}
