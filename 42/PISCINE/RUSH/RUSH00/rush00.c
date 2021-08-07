void	ft_putchar(char c);

void	ft_print_long(int x, char L, char M, char R)
{
	if (x > 0)
	{
		ft_putchar(L);
		while (x > 2)
		{
			ft_putchar(M);
			x--;
		}
		ft_putchar(R);
	}
}

void	ft_print_mid(int x, int y, char M)
{
	int b;
	
	b = x;
	while (y > 2)
	{
		ft_putchar('\n');
		ft_putchar(M);
		while (x > 2)
		{
			ft_putchar(' ');
			x--;
		}
		x = b;
		ft_putchar(M);
		y--;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (y > 0)
		ft_print_long(x, 'A', 'B', 'C');
	if (y > 1)
		ft_print_mid(x, y, 'B');
	ft_print_long(x, 'C', 'B', 'A');
}
