void	*ft_memset(void *str, int c, int n)
{
	unsigned char	*ptr;
	int				index;

	ptr = (unsigned char*)str;
	index = 0;
	while (index < n)
		ptr[index++] = (unsigned char)c;
	return (str);
}
