#include "libft.h"
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*temp1;
	unsigned char	*temp2;

	temp1 = (unsigned char *)s1;
	temp2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while(*temp1 && --n && *temp1 == *temp2)
	{
		temp1++;
		temp2++;
	}
	
	return (*temp1 - *temp2);
}
