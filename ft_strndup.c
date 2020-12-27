#include "libft.h"
#include <stdlib.h>

char	*ft_strndup(char const *str, int n)
{
	char	*res;
	int		size;

	size = 0;
	while (str[size])
		size++;
	size = n < size ? n : size;
	res = malloc(size + 1);
	if (!res)
		return (NULL);
	res[size] = 0;
	while (size--)
		res[size] = str[size];
	return (res);
}
