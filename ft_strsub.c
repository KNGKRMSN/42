#include "stdlib.h"

char	*ft_strsub(char const *s, unsigned int start, unsigned int len)
{
	char	*snew;
	int	i;

	i = 0;
	if (!(snew = malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (i <= len && s[start] != '\0')
	{
		snew[i] = s[start];
		i++;
		start++;
	}
	return (snew);
}
