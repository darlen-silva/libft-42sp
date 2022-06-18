void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	count;
	unsigned char	*str;
	unsigned char	aux;

	str = (unsigned char *)s;
	aux = (unsigned char)c;
	count = 0;
	while (i < n)
	{
		if (*str == aux)
			return (str);
		str++;
		count++;
	}
	return (NULL);
}
