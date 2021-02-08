#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, int n)
{
	int	index;

	index = 0;
	while (s1[index] && s1[index] == s2[index] && index < n)
		index++;
	return ((unsigned char)s1[index] - (unsigned char)s2[index]);
}
