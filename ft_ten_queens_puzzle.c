#include <stdlib.h>

int	ft_check(tab, i)
{
	int	diago;
	int	y;
	int	line;

	diago = 1;
	k = 0;
	line = 0;
	while (line < i)
	{
		if (tab[i] == tab[line])
			return (0);
		line++;
	}
	while
		if (tab[i - diago] == k - diago)

}

void	ft_may_i(tab)
{
	int i;
	int k;
	int check;
	
	i = 0;
	if (!(tab[i - 1]))
	{
		tab[i] = 0;
		i++;
	}
	if (tab[i - 1])//ca marche pas ton if
	{
		k = 0;
		while (k <= 9)
		{
			if (tab[i - 1] != k && tab[i - 1] != k - 1 && tab[i - 1] != k + 1)
			{
				check = 0;
				while (check < i)
				{
					if (tab[check] == k)
						maxicheck
				}
				tab[i] = k;
				break ;
			}
			else
				k++;
		}
		i++;
	}
}

void	ft_ten_queens_puzzle(void)
{
	int	*tab[10];
	int	x;
	int	y;
	int	pos;
	
	x = 0;
	y = 0;
	
	ft_may_i(tab);
	if (pos == 10)
	{
		ft_print(tab);
	}
}
