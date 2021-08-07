#include <libc.h>
#include <stdio.h>

void	ft_putchar(char c);
void	rush(int x, int y);

int	ft_atoi(char *str)
{
	int res;
	int neg;
	int i;
	
	res = 0;
	neg = 1;
	i = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res);
}

int	main(int argc, char **argv)
{
//	printf("%d\n", ft_atoi("7845"));
	rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
	return (0);
}
