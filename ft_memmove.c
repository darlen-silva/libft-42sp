/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 17:42:09 by dardo-na          #+#    #+#             */
/*   Updated: 2022/06/15 17:42:13 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest || !src)
		return (NULL);
	if (dest > src)
	{
		i = n - 1;
		while (i + 1 > 0)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i--;
		}
	}
	else 
	{
		i = 0;
		while (i < n)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dest);
}


int main(void)
{
	char	s1[] = "0123456789";
	char	s2[] = "0123456789";
	char	s3[] = "0123456789";
	char	s4[] = "0123456789";

	printf("Test de ft_memmove :\n");
	if (!strcmp(memmove(s1, s1 + 4, 7), ft_memmove(s2, s2 + 4, 7)))
	{
		printf("%s\n", s1);
		printf("%s\n", s2);
		printf("OK\n\n");
	}
	else {
		printf("Failed (tests : ft_memmove(s, s + 3, 5)\n");
		printf("%s\n", s1);
		printf("%s\n", s2);
	}
	if (!strcmp(memmove(s3 + 4, s3, 4), ft_memmove(s4 + 4, s4, 4)))
	{
		printf("%s\n", s3);
		printf("%s\n", s4);
		printf("OK\n");
	}
	else {
		printf("failed test2 ft_memmove(s + 3, s, 5)\n");
		printf("%s\n", s3);
		printf("%s\n", s4);
	}
}
