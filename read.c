/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprudhom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 11:21:52 by mprudhom          #+#    #+#             */
/*   Updated: 2020/01/28 19:50:44 by mprudhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_organize(int *tmp, char *s)
{
	int j;
	int i;
	int c;
	int d;

	j = 1;
	i = 0;
	c = tmp[i];
	d = tmp[j];
	while (i <= 6)
	{
		
		if (tmp[i] < c)
			c = tmp[i];
		i += 2;
	}
	i = 0;
	printf("c = %d\n", c);
	while (i <= 6)
	{
		tmp[i] -= c;
		i += 2;
	}
	while (j <= 7)
	{
		if (tmp[j] < d)
			d = tmp[j];
		j += 2;
	}
	printf("d = %d\n", d);
	j = 1;
	while (j <= 7)
	{
		tmp[j] -= d;
		j += 2;
	}
	ft_transform(tmp);
/*	j = 0;
	while (j < 8)
	{
		printf("tetri = %d \n", tmp[j]);
		ft_putchar('\n');
		j++;
	}*/
}

void		ft_findtetri(int i, char *s)
{
	int c;
	int x;
	int y;
	int l;
	int tmp[8];

	c = 20;
	x = 0;
	y = 0;
	l = 0;
	while (c > 0)
	{
		if (s[i] == '#')
		{
			tmp[l] = x;
			l++;
			tmp[l] = y;
			l++;
		}
		if (s[i] == '\n')
		{
			x = 0;
			y++;
		}
		if (s[i] != '\n')
			x++;
		i++;
		c--;
	}
	ft_organize(tmp, s);
}

int		ft_checkformat(char *s, int fd)
{
	int	i;
	int	nbtetri;
	int	c;
	int	k;

	i = 0;
	c = 0;
	k = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
	s[i] = '\0';
	if ((i % 21) != 0)
		return (-1);
	nbtetri = (i / 21);
	i = 0;
	while (s[i] != 0 && (s[i] == '\n' || s[i] == '.' || s[i] == '#' ))
	{
		//manque bcp de check avant de lancer ca
		if (s[i] == '\n' && s[i + 1] == '\n')
		{					
			k = i - 19;
			ft_findtetri(k, s);
		}
		if (s[i] != '.' && s[i] != '#' && s[i] != '\n')
		{
			ft_putstr("wrong place");
			return (-1);
		}
		c++;
		i++;
	}
	return (1);
}

int		ft_1stread(char *file)
{
	int	fd;
	int	ret;
	char	buf[BUFF_SIZE + 1];
	char	*s;

	if (file)
	{
		if ((fd = open(file, O_RDONLY)) == -1)
			return (0);
		while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
		{
			buf[ret] = '\0';
			if (s)
			{
				if (!(s = ft_strdup(buf)))
					return (-1);
			}
		}
		if ((ret = ft_checkformat(s, fd)) == -1)
		{
			ft_putstr("error checkformat\n");
			return (0);
		}
	}
	close(fd);
	return (0);
}
