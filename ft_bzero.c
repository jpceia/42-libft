void	*ft_bzero(void *str, int n)
{
	char	*ptr;

	ptr = (char*)str;
	while (n)
		ptr[--n] = 0;
	return (str);
}
