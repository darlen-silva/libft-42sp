#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	count;
	char	*a_dest;
	char	*a_src;

	count = 0;
	a_dest = (char *)dest;
	a_src = (char *)src;
	while (count < n)
	{
		a_dest[count] = a_src[count];
		count++;
	}
	return (dest);
}
