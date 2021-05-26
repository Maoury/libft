#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	const char *temp;

	while (*s)
	{
		if (*s == c)
		{
			temp = s + 1;
			while (*temp && *temp != c)
				temp++;
			if (*temp != c)
				return ((char *)s);
		}
		s++;
	}
	if ((unsigned char)c == 0)
		return ((char *)s);
	return (NULL);
}
