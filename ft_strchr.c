#include "string.h"

char	*ft_strchr(char *s, char c)
{
	int i;

	i = 0;
	if (!s || !c)
		return (NULL);
	while (s[i] != c && s[i] != '\0')
	{
		i++;
	}
	if (s[i] == c)
		return (s);
	else 
		return (NULL);
}
