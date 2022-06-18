/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 22:22:39 by dardo-na          #+#    #+#             */
/*   Updated: 2022/06/15 22:22:44 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	char	*b_tmp;
	char	*l_tmp;
	size_t	i;

	i = 0;
	if (!big || !little)
		return (NULL);
	if (!little || !little[0])
		return ((char *)big);
	while (*big && i++ < len)
	{
		b_tmp = (char *)big;
		l_tmp = (char *)little;
		while (*b_tmp == *l_tmp && *l_tmp != '\0')
		{
			b_tmp++;
			l_tmp++;
		}
		if (*l_tmp == '\0')
			return ((char *)big);
		big++;
	}
	return (NULL);
}

int main(void)
{
	char	big[] = "oi meu chapa";
	char	lile[] = "me";
	// char	t = 139;

	printf("%s\n", ft_strnstr(big, lile, 3));
	// printf("%x\n", t);
}
