#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1C;
	unsigned char	*s2C;
	size_t	i;

	i = -1;
	s1C = (unsigned char *)s1;
	s2C = (unsigned char *)s2;
	while ((++i < n) && (*(s1C + i) == *(s2C + i)))
		;
	if (i == n)
		return (0);
	return (*(s1C + i) - *(s2C + i));
}
