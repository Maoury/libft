#include "libft.h"

char *ft_strdup(const char *s)
{
	char *tab;
	char *ptr;

	tab = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	ptr = tab;
	while(*s)
		*tab++ = *s++;
	return (ptr);
}
