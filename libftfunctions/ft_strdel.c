#include "libft.h"

void	ft_strdel(char **s)
{
	if (!s || !*as)
		return ;
	free (*s);
	*s = 0;
}
