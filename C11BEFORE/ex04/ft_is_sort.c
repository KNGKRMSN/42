/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprud-ho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 19:21:57 by mprud-ho          #+#    #+#             */
/*   Updated: 2021/08/24 18:38:44 by mprud-ho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	check;

	i = 0;
	check = 0;
	if (length == 0)
		return (0);
	while (i < length - 1 && check == 0)
	{
		check = f(tab[i], tab[i + 1]);
		i++;
	}
	while (i < length - 1)
	{
		if (f(str[i], str[i + 1]) > 0 && check > 0)
			return (0);
		if (f(str[i], str[i + 1]) < 0 && check < 0)
			return (0);
		i++;
	}
	return (1);
}
