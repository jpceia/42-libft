#include "libft.h"

int	ft_isalnun(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
