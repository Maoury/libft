#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t nlen;
	size_t i;
	size_t c;

	i = 0;
	nlen = ft_strlen(needle);
	if(nlen == 0)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		c = 0;
		while ((i + c) < len && haystack[i + c] && haystack[i + c] == needle[c])
			c++;
		if (c == nlen)
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
