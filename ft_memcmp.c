#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, int n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	int				index;

	ptr1 = (unsigned char*)str1;
	ptr2 = (unsigned char*)str2;
	index = 0;
	while (ptr1[index] == ptr2[index] && index < n)
		index++;
	return (ptr1[index] - ptr2[index]);
}
