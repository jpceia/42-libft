void	*ft_memcpy(void *dest, const void *src, int n)
{
	char	*ptr_dest;
	char	*ptr_src;
	int		index;

	ptr_dest = (char*)dest;
	ptr_src = (char*)src;
	index = 0;
	while (index < n)
		ptr_dest[index] = ptr_src[index++];
	return (dest);
}
