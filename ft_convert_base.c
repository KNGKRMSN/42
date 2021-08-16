/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprud-ho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 14:25:09 by mprud-ho          #+#    #+#             */
/*   Updated: 2021/08/16 17:36:30 by mprud-ho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_slen(char *str);
char	*ft_strrev(char *str);
int		ft_size(int res, char *base_to);

int	check(char *base)
{
	int	i;
	int	j;
	int	smallbase;

	i = 0;
	smallbase = ft_slen(base);
	if (smallbase == 0 || smallbase == 1)
		return (0);
	while (base[i])
	{
		j = 0;
		if (base[i] == 32 || (base[i] >= 9 && base[i] <= 13))
			return (0);
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j])
		{
			if ((base[i] == base[j]) && i != j)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	res;
	int	neg;

	i = 0;
	res = 0;
	neg = 1;
	if (check(base))
	{
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
			i++;
		while (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				neg *= -1;
			i++;
		}
		while (ft_base(str[i], base) >= 0)
		{
			res = res * ft_slen(base) + ft_base(str[i], base);
			i++;
		}
	}
	return (res * neg);
}

char	*ft_putnbr_base(int nbr, char *base, char *nb_final)
{
	int				i;
	unsigned int	jerome;

	i = 0;
	jerome = (unsigned int)nbr;
	if (check(base))
	{
		if (nbr < 0)
		{
			jerome = -jerome;
		}
		if (jerome >= 0)
		{
			while (jerome)
			{
				nb_final[i] = base[jerome % ft_slen(base)];
				jerome = jerome / ft_slen(base);
				i++;
			}
		}
	}
	if (nbr < 0)
		nb_final[i] = '-';
	return (nb_final);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*nb_final;
	int		res;
	int		nb;

	res = ft_atoi_base(nbr, base_from);
	if (!check(base_from) || !check(base_to))
		return (NULL);
	nb = ft_size(res, base_to);
	nb_final = malloc(sizeof(char) * nb);
	if (!(nb_final))
		return (NULL);
	if (res == 0)
	{
		nb_final[0] = base_to[0];
		return (nb_final);
	}
	ft_putnbr_base(res, base_to, nb_final);
	return (ft_strrev(nb_final));
}

int main(int ac, char **av)
{
	printf("%s\n", ft_convert_base(av[1], av[2], av[3]));
}
