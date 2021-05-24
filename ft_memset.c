
#include "libft.h"
#include <stdio.h>
#include <string.h>
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t 	i;
	
	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		*(ptr + i) = c;
		i++;
	}
	return(s);
	
}
/*
int	main(void)
{
	int tab[10];
	ft_memset(tab, 2, 10 * sizeof(tab[0]));
	for(int i = 0; i < 10; i++)
		printf("%d\n", *(tab + i));
	memset(tab, 2, 10 * sizeof(tab[0]));
	for(int i = 0; i < 10; i++)
		printf("%d\n", *(tab + i));
}*/
