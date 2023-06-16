/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:39:35 by dardo-na          #+#    #+#             */
/*   Updated: 2023/06/15 22:10:45 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	length;
	void	*ptr;

	length = count * size;
	ptr = malloc(length);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, length);
	return (ptr);
}
