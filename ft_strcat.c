#include "libft.h"

char	*ft_strcat(char *dest, char *src)
{
	int	n;
	int index;

	n = ft_strlen(dest);
	index = 0;
	while (src[index])
	{
		dest[n + index] = src[index];
		index++;
	}
	dest[n + index] = 0;
	return (dest);
}
