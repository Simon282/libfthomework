#include "libft.h"
#include <stdio.h>
char	*ft_strmap(char const *s, char (*f) (char))
{
	char	*freshstr;
	int	i;
	int	j;

	if (s && f)
	{
		i = 0;
		j = ft_strlen((char *)s);
		freshstr = (char *)malloc(j * sizeof(freshstr));
		while (s[i] != 0)
		{
			freshstr[i] = f(s[i]);
			i++;
		}
		return (freshstr);
	}
	return (NULL);
}
