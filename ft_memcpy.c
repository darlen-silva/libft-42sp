/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 01:54:40 by dardo-na          #+#    #+#             */
/*   Updated: 2023/06/17 00:03:06 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*a_dest;
	unsigned char	*a_src;

	if (dest == NULL && src == NULL)
		return (NULL);
	a_dest = (unsigned char *)dest;
	a_src = (unsigned char *)src;
	while (n--)
		*(a_dest++) = *(a_src++);
	return (dest);
}
