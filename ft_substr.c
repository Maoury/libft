#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	
	substr = (char *)malloc(sizeof(char) * len + 1);
	ft_strlcpy(substr, s + start, len + 1);
	return ((char *)substr);
}

