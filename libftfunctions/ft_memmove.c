#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*srcC;
	char	*destC;
	size_t	i;

	i = -1;
	srcC = (char *)src;
	destC = (char *)dest;
	if (srcC < destC)
		while ((int)(--len) >=0)
			*(destC + len) = *(srcC + len);
	else
		while (++i < len)
			*(destC + i) = *(srcC + i);
	return (dest);
}
