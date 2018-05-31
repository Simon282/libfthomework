#include "libft.h"

void	ft_putchar_fd(char const *s, int fd)
{
	while (s && *s)
		ft_putchar_fd(*s++, fd);
}
