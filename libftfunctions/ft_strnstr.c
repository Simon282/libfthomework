#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;
	size_t	h;
	int	found;

	i = -1;
	found = 1;
	if (!ft_len(needle))
		return ((char *)hay);
	while (*(hay + ++i) && (i < len))
	{
		j = 0;
		if (*(hay + i) == *(needle + 0))
		{
			k = i;
			found = 1;
			while (*(hay + h++) != *(needle + n++))
				found = 0;
			if (found && !*(needle + n))
				return ((char *)hay + i);
		}
	}
	return (NULL);
}
