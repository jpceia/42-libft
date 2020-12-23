void	*ft_memccpy(void *dest, const void *src, int c, int n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;
	unsigned char	a;
	int				index;

	ptr_dest = (unsigned char*)dest;
	ptr_src = (unsigned char*)src;
	index = 0;
	while (index < n)
	{
		a = ptr_src[index];
		ptr_dest[index] = a;
		if (a == c)
			break;
		index++;
	}	
	return (dest);
}
