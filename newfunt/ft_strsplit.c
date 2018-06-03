#include "libft.h"

static int	ft_countword(char const *s, char c)
{
	unsigned int	i;
	int		control;

	i = 0;
	control = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			control++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (control);
}
static char	*ft_strndup(const char *s, size_t n)
{
	char	*string;

	string = (char *)malloc(sizeof(char) * n + 1);
	if (string == NULL)
		return (NULL);
	string = ft_strncpy(str, s, n);
	string[n] = '\0';
	return (string);
}
char	**ft_strsplit(char const *s, char c)
{
	int	i;
	int	j;
	int	k;
	char	**table;

	i = 0;
	k = 0;
	table = (char **)malloc(sizeof(char *) * (ft_countword(s, c)) + 1);
	if (table == NULL)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
		{
			table[k] = ft_strnfup(s + j, i - j);
			k++;
		}
	}
	table[k] = NULL;
	return (table);


