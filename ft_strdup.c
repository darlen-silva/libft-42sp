/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 14:54:06 by dardo-na          #+#    #+#             */
/*   Updated: 2022/06/13 14:54:10 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

char	*ft_strdup(const char *src)
{
	char	*ptr;
	size_t	count;

	count = 0;
	ptr = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (ptr == NULL)
		return (NULL);
	while (src[count])
	{
		ptr[count] = src[count];
		count++;
	}
	ptr[count] = '\0';
	return (ptr);
}
