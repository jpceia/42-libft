
void	*ft_memchr(const void *str, int c, int n)
{
	unsigned char	*ptr;

	ptr = (unsigned char*)str;
	while (ptr - (unsigned char*)str < n)
	{
		if (*ptr == (unsigned char)c)
			return (ptr);
		ptr++;
	}
	return (0);
}
