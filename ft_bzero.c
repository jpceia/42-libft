void	*ft_bzero(void *str, int n)
{
	char	*ptr;

	ptr = (char*)str;
	while (ptr - (char*)str < n) 
		*(ptr++) = 0;
	return (str);
}
