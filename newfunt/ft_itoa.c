#include "libft.h"

char	*ft_itoa(int n)
{
	char	*string;

	if (!(string = (char *)malloc(sizeof(char) * 2)))
		return (NULL);
	if (n == -2147483648)
		return (ft_strcpy(str, "-2147483648"));
	if (n < 0)
	{
		string[0] = '-';
		string[1] = '\0';
		string = ft_strjoin(str, ft_itoa(-n));
	}
	else if (n >= 10)
		string = ft_strjoin(ft_itoa(n / 10));
	else if (n < 10 && n >= 0)
	{
		string[0] = n + '0';
		string[1] = '\0';
	}
	return (string)
}
