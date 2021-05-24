#include "libft.h"
#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t		i;
	
	ptr = (unsigned char *)s;
	i = 0;
	while(i < n)
		*(ptr + i++) = '\0';
}
/*
int main(void)
{
	char t[] = "nique ses grands mort";
       printf("%s aha\n", t);	
	ft_bzero(t, strlen(t));
       printf("%s aha\n", t);
}    */   
