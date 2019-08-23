#include "stdlib.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *snew;
	int i;
	int j;
	int size;

	i = 0;
	j = 0;
	size = ft_strlen(s1) + ft_strlen(s2);
	if (!(snew = malloc(sizeof(char) * size + 1)))
		return (NULL);
	while (s1[i] != '\0')
	{
		snew[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		snew[i] = s2[j];
		i++;
		j++;
	}
	snew[i] = '\0';
	return (snew);
}
