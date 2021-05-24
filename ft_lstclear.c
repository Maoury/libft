#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *temp;

	while(*lst)
	{
		temp = *lst;
		if (del)
		{
			del(lst->content);
			*lst = *lst->next;
			free(temp);
		}
	}
}	
