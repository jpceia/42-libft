#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, int n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;
	int				index;

	ptr_dest = (unsigned char*)dest;
	ptr_src = (unsigned char*)src;
	index = 0;
	while (index < n)
	{
		ptr_dest[index] = ptr_src[index];
		if (ptr_src[index] == c)
			break;
		index++;
	}
	return (dest);
}
