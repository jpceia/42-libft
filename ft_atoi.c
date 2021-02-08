#include "libft.h"

int isspace(char c)
{
	return ((c == ' ') || (c == '\t'));
}

int	ft_atoi(const char *str)
{
	int nb;
	int sgn;

	nb = 0;
	while (isspace(*str))
		str++;
	sgn = 1;
	if (*str == '-' || *str == '+')
	{
		sgn = *str == '-' ? -1 : 1;
		str++;
	}
	while (*str)
	{
		nb = 10 * nb + sgn * (*str - '0');
		str++;
	}
	return (nb)
}
