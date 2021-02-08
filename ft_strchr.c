#include "libft.h"

char *ft_strchr(const char *str, int ch)
{
	char c;

	c = (char)ch;
	if (c)
	{
		while(*str)
		{
			if (c == *str)
				return (str);
			str++;
		}
		return (0);
	}
	while (*str)
		str++;
	return (&str[0]);
}
