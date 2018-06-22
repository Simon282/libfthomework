#include "get_next_line.h"
#include "libft.h"
#include <stdio.h>

static char	*buffer_size(int const fd, char *buff, int *result)
{
	char	temp[BUFF_SIZE + 1];
	char	*temp2;

	*result = read(fd, temp, BUFF_SIZE);
	if (*result >= BUFF_SIZE && temp[*result - 1] == '\n')
		temp[*result] = '\0';
	else
	{
		temp[*result] = '\n';
		temp[*result + 1] = '\0';
	}
	temp2 = buff;
	buff = ft_strjoin(buff, temp);
	ft_strdel(&temp2);
	return (buff);
}

int	get_next_line(int const fd, char **line)
{
	static char	*buff = NULL;
	int		ret;
	char		*str;

	if (!line || fd < 0)
		return (-1);
	ret = 1;
	if (!buf)
		buf = ft_strnew(0);
	while (ret > 0)
	{
		if ((str = ft_strchr(buff, '\n')) != NULL)
		{
			*str = 0;
			*line = ft_strdup(buff);
			ft_memmove(buff, str + 1, ft_strlen(str + 1));
			return (1);
		}
		buff = buffer_size(fd, buff, &ret);
	}
	if (ret == 0)
		*line = ft_strnew(0);
	return (ret);
}

//int main()
//{
//	int		ret = 1;
//	char	*line;
//
//	while (ret > 0)
//	{
//		ret = get_next_line(0, &line);
//		printf("line = %s\n", line);
//		free(line);
//	}
//}
