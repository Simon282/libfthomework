#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;
	t_list	*next;

	temp = *alst;
	if (del != NULL)
	{
		while (temp != NULL)
		{
			next = temp->next;
			del(temp->content_size);
			free(temp);
			temp = next;
		}
		*alst = NULL;
	}
}
