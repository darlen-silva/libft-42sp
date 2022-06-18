int	ft_atoi(const char *nptr)
{
	int	val;
	int	sign;

	val = 0;
	sign = 1;
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
		nptr++;
	}
	return (val * sign);
}

#include <stdio.h>
int main(int ac, char **av)
{
	int a = 0;

	if (ac == 2)
	{
		a = ft_atoi(av[1]);
	}
	printf("%d\n", a);
}
