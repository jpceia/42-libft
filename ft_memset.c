#include "libft.h"

void	*ft_memset(void *str, int c, int n)
{
	unsigned char	*ptr;

	ptr = (unsigned char*)str;
	while (ptr - (unsigned char*)str < n)
		*(ptr++) = (unsigned char)c;
	return (str);
}
