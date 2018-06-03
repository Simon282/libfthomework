#include "libft.h"
#include <stdio.h>
char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*substring;

	if (!s)
		return (NULL);
	substring = (char *)ft_malloc(sizeof(char) * (len + 1));
	if (substring == NULL)
		return (NULL);
	substring = (char *)ft_memcpy(substring, (s + start), len);
	return (substring);
}
