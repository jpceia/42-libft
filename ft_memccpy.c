#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, int n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;
	int				index;

	ptr_dest = (unsigned char*)dest;
	ptr_src = (unsigned char*)src;
	index = 0;
	while (index < n && ptr_src[index] != (unsigned char)c)
	{
		ptr_dest[index] = ptr_src[index];
		index++;
	}
	return (dest);
}
