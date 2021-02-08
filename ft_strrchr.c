#include "libft.h"

char *ft_strrchr(const char *str, int ch)
{
	int		index;
	char	c;

	c = (char)ch;
	index = 0;
	while (str[index])
		index++;	
	while (index >= 0)
	{
		if (str[index] == c)
			return (&str[index])
		index--;
	}
	return (0);
}
