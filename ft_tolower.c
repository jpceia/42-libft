#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 0x20); 
	return (c);
}
