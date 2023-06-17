/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 21:02:46 by dardo-na          #+#    #+#             */
/*   Updated: 2023/06/16 23:05:55 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	ft_atoi(const char *nptr)
{
	long int	val;
	int			sign;
	int			count;

	val = 0;
	sign = 1;
	count = 0;
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -sign;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		val = (val * 10) + (*nptr - '0');
		if (++count > 19 && sign > 0)
			return (-1);
		else if (count > 19 && sign < 0)
			return (0);
		nptr++;
	}
	return (val * sign);
}
