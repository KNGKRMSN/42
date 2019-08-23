#include "string.h"
#include "stdlib.h"

char	*ft_strdup(const char *s)
{
	char	*snew;
	int	i;

	i = 0;
	if (!(snew = malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	while (s[i] != 0)
	{
		snew[i] = s[i];
		i++;
	}
	snew[i] = '\0';
	return (snew);
}
