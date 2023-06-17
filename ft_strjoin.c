/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 01:36:00 by dardo-na          #+#    #+#             */
/*   Updated: 2023/06/17 00:17:31 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	slen;
	char			*tmp;
	size_t			i;
	size_t			j;

	if (s1 == NULL)
		return (NULL);
	slen = ft_strlen(s1) + ft_strlen(s2);
	tmp = (char *)malloc(sizeof(*s1) * slen + 1);
	if (tmp == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		tmp[j++] = s1[i++];
	i = 0;
	while (s2[i])
		tmp[j++] = s2[i++];
	tmp[j] = 0;
	return (tmp);
}
