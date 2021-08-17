/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprud-ho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 12:44:06 by mprud-ho          #+#    #+#             */
/*   Updated: 2021/08/16 17:29:41 by mprud-ho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (-1);
	}
	j = max - min;
	range = malloc(sizeof(int) * j);
	if (!(range))
		return (-1);
	while (i < j)
	{
		*(*range) = min;
		i++;
		min++;
	}
	return (j);
}
