/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprud-ho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 15:49:35 by mprud-ho          #+#    #+#             */
/*   Updated: 2021/08/23 16:06:56 by mprud-ho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_check(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	ft_words(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (!ft_check(str[i], charset) && ft_check(str[i - 1], charset))
			count++;
		i++;
	}
	return (count);
}

void	ft_put_in_tab(char *tab, char *str, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		tab[i] = *str;
		i++;
		str++;
	}
	tab[i] = 0;
}

void	ft_splitncreate(char **tab, char *str, char *charset)
{
	int	i;
	int	j;
	int	word;

	i = 0;
	word = 0;
	while (str[i])
	{
		if (ft_check(str[i], charset))
			i++;
		else
		{
			j = 0;
			while (ft_check(str[i + j], charset) == 0)
				j++;
			tab[word] = malloc(sizeof(char) * j + 1);
			if (!tab[word])
				return ;
			ft_put_in_tab(tab[word], str + i, j);
			i += j;
			word++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		len;

	i = 0;
	len = ft_words(str, charset);
	tab = malloc(sizeof(char *) * len + 1);
	if (!tab)
		return (NULL);
	tab[len] = 0;
	ft_splitncreate(tab, str, charset);
	return (tab);
}
