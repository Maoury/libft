#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char *ptr;

	if (!(ptr = (unsigned char *)malloc((nmemb * size) + 1)))
		return (NULL);
	ft_bzero(ptr, size * nmemb);
	return (ptr);
}
