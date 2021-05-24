#include "libft.h"
#include <stdio.h>
int ft_atoi(const char *nptr)
{
	int sign;
	long res;

	res = 0;
	sign = 1;
	while (*nptr && ((*nptr >= 9 && *nptr <= 13) || *nptr == ' '))
		nptr++;
	if (*nptr && (*nptr == '+'))
		nptr++;
	else if (*nptr == '-')
	{
			sign *= -1;
			nptr++;
	}
	while (*nptr && *nptr >= '0' && *nptr <= '9')
		res = res * 10 + (*nptr++ - 48);
	return ((int) (res * sign));
}


/*int main()
{
	printf("%d", ft_atoi("-2147483648"));
}*/
