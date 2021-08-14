#include <stdlib.h>
#include <stdio.h>

int	ft_check(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
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
	int	words;

	words = 0;
	i = 0;
	while (str[i])
	{
		if (ft_check(str[i + 1], charset) == 1 && ft_check(str[i], charset) == 0)
			words++;
		i++;
	}
	return (words);
}

void	ft_put_in_tab(char *tab, char *str, char *charset)
{
	int	i;

	i = 0;
	while (ft_check(str[i], charset) ==  0)
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = '\0';
}

void	ft_splitncreate(char **tab, char *str, char *charset)
{
	int	i;
	int	j;
	int	word;

	word = 0;
	i = 0;
	while (str[i])
	{
		if (ft_check(str[i], charset))
			i++;
		else
		{
			j = 0;
			while (!(ft_check(str[i + j], charset)))
				j++;
			tab[word] = malloc(sizeof(char) * (j + 1));
			ft_put_in_tab(tab[word], str + 1, charset);
			i = i + j;
			word++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char **tab;
	int	size;

	size = ft_words(str, charset);
	tab = malloc(sizeof(char *) * size + 1);
	if (!(tab))
		return (NULL);
	tab[size] = 0;
	ft_splitncreate(tab, str, charset);
	return (tab);
}

int main(int ac, char **av)
{
	int i;
	char **tab = NULL;

	i = 0;
	tab = ft_split(av[1], av[2]);
	while (tab[i])
	{
		printf("tab[i] = %s\n", tab[i]);
		i++;
	}
	return (0);
}
