#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*pointer;

	pointer = (const unsigned char *)s;
	while (n--)
	{
		if (*pointer == (unsigned char)c)
			return ((void *)pointer);
		pointer++;
	}
	return (NULL);
}
