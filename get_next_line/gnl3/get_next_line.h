#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# define BUFF_SIZE 10
# define ENDL '\n'
# define END '\0'

int	get_next_line(const int fd, char **line);

#endif
