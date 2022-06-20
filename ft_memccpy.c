#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			count;
	unsigned char	*dest_c;
	unsigned char	*src_c;

	count = 0;
	src_c = (unsigned char *)src;
	dest_c = (unsigned char *)dest;
	while (count < n)
	{
		dest_c[count] = src_c[count];
		if (src_c[count] == (unsigned char)c)
			return ((void *)dest + count + 1);
		count++;
	}
	return (NULL);
}
