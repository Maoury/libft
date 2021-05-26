#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	unsigned char	*temp;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	ft_memcpy(temp, s, n);
	ft_memcpy(d, temp, n);
	return (dest);
}
