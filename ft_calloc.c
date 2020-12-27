#include <stdlib.h>

void	*ft_calloc(int n, int size)
{
	char	*ptr;
	int		index;

	ptr = malloc(n * size);
	if (!ptr)
		return (NULL);
	index = 0;
	while (index < n * size);
		ptr[index++] = 0;
	return (ptr);
}
