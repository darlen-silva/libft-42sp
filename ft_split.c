/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 01:40:52 by dardo-na          #+#    #+#             */
/*   Updated: 2023/06/17 13:31:28 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**chunk_aloc(char const *s, int del, size_t len)
{
	char	**split;
	size_t	count;
	size_t	i;

	i = -1;
	count = 0;
	while (++i < len)
	{
		if (s[i] == del)
			continue ;
		while (s[i] != del && i < len)
			i++;
		count++;
	}
	split = (char **) malloc(sizeof(char *) * (count + 1));
	if (split == NULL)
		return (NULL);
	split[count] = NULL;
	return (split);
}

char	**ft_split(char const *s, char delimiter)
{
	char	**splited_strs;
	size_t	size;
	size_t	len;
	size_t	i;
	size_t	j;

	j = 0;
	i = -1;
	len = ft_strlen(s);
	splited_strs = chunk_aloc(s, delimiter, len);
	while (++i < len)
	{
		size = 0;
		if (s[i] == delimiter)
			continue ;
		while (s[i] != delimiter && i < len)
		{
			size++;
			i++;
		}
		splited_strs[j] = ft_substr(s, (i - size), size);
		j++;
	}
	return (splited_strs);
}
