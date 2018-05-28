#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new;
	char	*pointer;

	new = ft_strnew(ft_strlen(s1));
	if (new == NULL)
		return (NULL);
	pointer = new;
	while (*s1 != '\0')
		*new++ = *s1++;
	return (pointer);
}
