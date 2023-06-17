/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 01:38:21 by dardo-na          #+#    #+#             */
/*   Updated: 2023/06/17 00:06:34 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			count;
	unsigned char	*dest_c;
	unsigned char	*src_c;
	unsigned char	value;

	count = 0;
	src_c = (unsigned char *)src;
	dest_c = (unsigned char *)dest;
	value = (unsigned char)c;
	while (count < n)
	{
		dest_c[count] = src_c[count];
		if (src_c[count] == value)
			return ((void *)dest + count + 1);
		count++;
	}
	return (NULL);
}
