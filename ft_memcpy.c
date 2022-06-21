#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			count;
	unsigned char	*a_dest;
	unsigned char	*a_src;

	count = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	a_dest = (unsigned char *)dest;
	a_src = (unsigned char *)src;
	while (count < n)
	{
		a_dest[count] = a_src[count];
		count++;
	}
	return (a_dest);
}
