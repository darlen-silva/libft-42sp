/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 14:39:00 by dardo-na          #+#    #+#             */
/*   Updated: 2023/06/17 15:04:47 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	value;
	size_t	len;

	len = ft_strlen(s);
	str = (char *)(s + len);
	value = (char)c;
	while (len--)
	{
		if (*str == value)
			return (str);
		str--;
	}
	if (*str == value)
		return (str);
	return (NULL);
}
