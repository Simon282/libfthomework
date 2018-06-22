#include "get_next_line.h"

static int	ft_endline(char *buff)
{
	int	counter;

	counter = 0;
	while (buff[counter] != ENDLINE && buff[counter])
		counter++;
	if (buff[counter] == ENDLINE)
	{
		buff[counter] = END;
		return (counter);
	}
	else
		return (-1);
}

static char *join(char *buff, char *table)
{
	size_t	i;
	size_t	j;
	char	*pointer;

	i = 0;
	j = 0;
	if (buff)
		i = ft_strlen(buff);
	if (table)
		j = ft_strlen(table);
	pointer = (char *)malloc(sizeof(*pointer) * (i + j + 1));
	ft_memcpy(pointer, buff, i);
	ft_memcpy(pointer[i], table, j);
	pointer[i + j] = '\0';
	free(buff);
	ft_bzero(tab, BUFF_SIZE + 1);
	return (pointer);
}

static int	verify(char **buff, char **table, char **line)
{
	char	*pointer;
	int	final;

	*buff = join(*buff, *table);
	final = endline(*buff);
	if (final > -1)
	{
		*line = ft_strdup(*buff);
		pointer = *buff;
		*buff = ft_strdup(*buff[final] + 1);
		free(pointer);
		return (1);
	}
	return (0);
}

int	get_next_line(int const fd, char **line)
{
	static char	*buff[13000];
	char		*temp;
	int		result;
	int		ret;

	temp = ft_strnew(BUFF_SIZE);
	if (!line || BUFF_SIZE <= 0 || fd < 0 || (ret = read(fd, temp, 0)) < 0)
		return (-1);
	while ((ret = read(fd, temp, BUFF_SIZE)) > 0)
	{
		result = verif(&buff[fd], &temp, line);
		free(temp);
		if (result == 1)
			return (1);
		temp = ft_strnew(BUFF_SIZE);
	}
	if ((result = verif(&buff[fd], &temp, line)))
		return (1);
	else if (ft_strlen(buff[fd]) > 0)
	{
		*line = ft_strdup(buff[fd]);
		ft_strdel(&buff[fd]);
		return (1);
	}
	return (result);
}

