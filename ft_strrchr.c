/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 00:11:22 by dardo-na          #+#    #+#             */
/*   Updated: 2022/06/16 00:11:25 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;

	tmp = NULL;
	while (*s)
	{
		if (*s == (char)c)
			tmp = ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (tmp);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[] = "striring";
	char s2[] = "striring";
	char c = 't';

	printf("%s\n", ft_strrchr(s1, c));
	printf("%s\n", strrchr(s2, c));

}

