/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprud-ho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 19:19:59 by mprud-ho          #+#    #+#             */
/*   Updated: 2021/08/17 17:57:06 by mprud-ho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
int		check(char *base);
int		ft_atoi_base(char *str, char *base);
char	*ft_putnbr_base(int nbr, char *base, char *nb_final);

int	ft_slen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_size(int res, char *base_to)
{
	int	i;

	i = 0;
	if (res < 0)
		res = -res;
	while (res)
	{
		res = res / ft_slen(base_to);
		i++;
	}
	return (i);
}
/*
char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = ft_slen(str) - 1;
	printf("%c\n", str[j]);
	while (i <= j)
	{
		c = str[i];
		str[i] = str[j];
		str[j] = c;
		i++;
		j--;
	}
	i *= 2;
	str[i ] = '\0';
	return (str);
}*/
