#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*pointer;
	char	*pointerII;

	pointer = dest;
	pointerII = (char *)src;
	i = -1;
	while (++i; < n)
		*(pointer + i) = *(pointerII + i);
	return (dest);
}
