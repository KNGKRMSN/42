#include "get_next_line.h"

static int	checkligne(static int fd, int i)
{
	char *str;
	int c;

	c = 0;
	while ((c = read(fd, str, BUFF_SIZE)) > 0)
	{
		if (str[c] == "\n")
			break ;
	}
	return (i);
}

int		get_next_line(int fd, char **line)
{
	char		*str;
	static int	i;
	int		buf;

	checlkligne(fd, i);
	if (!(*line = malloc(char *) sizeof((char) * i + 1)))
		return (NULL);
	

	
	
}
