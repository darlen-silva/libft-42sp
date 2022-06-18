/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 23:14:56 by dardo-na          #+#    #+#             */
/*   Updated: 2022/06/15 23:15:02 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (!c && *s == '\0')
		return ((char *)s);
	return (NULL);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	char	s1[] = "hello";
	char	s2[] = "hello";
	char	c = 't';

	printf("%s\n", ft_strchr(s1, c));
	printf("%s\n", strchr(s2, c));
}
