#include "libft.h"

void	memdel(void **p)
{
	if (!p || !*p)
		return ;
	free(*p);
	*p = 0;
}
