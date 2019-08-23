#include "get_next_line.h"

static int	get_line(char **s, char **line)
{
	int	len;
	char	*tmp;

	len = 0;
	while ((*s)[len] != '\0' && (*s)[len] != '\n')
		len++;
	if ((*s)[len] == '\n')
	{
		*line = ft_strsub(*s, 0, len);
		tmp = ft_strdup(&((*s)[len + 1]));
		free(*s);
		*s = tmp;
	}
	else 
	{
		*line = ft_strdup(*s);
		ft_strdel(s);
	}
	return (1);
}

static int	get_output(char **s, char **line, int ret, int fd)
{
	if (ret < 0)
		return (-1);
	else if (ret == 0 || s[fd] == NULL)
		return (0);
	else
		return (get_line(&s[fd], line));
}

int		get_next_line(const int fd, char **line)
{
	int	ret;
	char	buf[BUFF_SIZE + 1];
	char	*tmp;
	static char	*s[BUFF_SIZE];

	if (fd < 0 || line == NULL)
		return (-1);
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		//printf("buf = %s\n", buf);
		if (s[fd] == NULL)
			s[fd] = ft_strdup(buf);
		else
		{
			tmp = ft_strjoin(s[fd], buf);
			free(s[fd]);
			s[fd] = tmp;
		}
		if (ft_strchr(s[fd], '\n'))
			break ;
	}
	return (get_output(s, line, ret, fd));
}


int   main(int ac, char **av)
{
  char *line;
    int fd;

	fd = open(av[1], O_RDONLY);
//	printf("fd = %d\n", fd);
	get_next_line(fd, &line);
	printf("%s\n", line);
	get_next_line(fd, &line);
	printf("%s\n", line);
	get_next_line(fd, &line);
	printf("%s\n", line);
	get_next_line(fd, &line);
	printf("%s\n", line);
	get_next_line(fd, &line);
	printf("%s\n", line);
	get_next_line(fd, &line);
	printf("%s\n", line);
	return (0);
}
