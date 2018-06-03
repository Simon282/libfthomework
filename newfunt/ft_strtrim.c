#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned	i;
	unsigned	j;
	unsigned	k;
	char		*string;

	i = 0;
	k = 0;
	while (s[i] == ' ' || s[i] == '\n' || '\t')
		i++;
	if (s[i] == '\0')
		return (ft_strcpy(ftmemalloc(sizeof(char) * 2), ""));
	j = ft_strlen(s) - 1;
	while  (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
		j--;
	string = (char *)malloc(sizeof(char) * (j - i + 2));
	if (string == NULL)
		return (NULL);
	while (k < j - i + 1)
	{
		sting[k] = s[i + k];
		k++;
	}
	string[k] = '\0';
	return (string);
}
