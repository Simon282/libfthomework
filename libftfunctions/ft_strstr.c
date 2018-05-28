#include "libft.h"

char	*ft_strstr(const char *hay, const char *needle)
{
	int	i;
	int	n;
	int	h;
	int	good;

	if (!ft_len(needle))
		return ((char *)hay);
	i = -1;
	good = 0;
	while (*(hay + ++i) && !good)
	{
		if (*(hay + i) == *(needle + 0))
		{
			j = 0;
			k = i;
			good = 1;
			while (*(needle + n))
				if (*(needle + n++) != *(hay + h++))
					good = 0;
			if (good)
				return ((char*)hay + i);
		}
	}
	return (NULL)
}
