/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalshoub <aalshoub@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 15:20:12 by aalshoub          #+#    #+#             */
/*   Updated: 2025/12/13 15:07:04 by aalshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
}
/*#include <stdio.h>

// del function (لا تحرر شيء لأنها ليست malloc)
void del(void *content)
{
    (void)content;
}

int main(void)
{
    t_list *head = NULL;

    t_list *node1 = ft_lstnew("One");
    t_list *node2 = ft_lstnew("Two");
    t_list *node3 = ft_lstnew("Three");

    head = node1;
    node1->next = node2;
    node2->next = node3;

    printf("Clearing list...\n");
    ft_lstclear(&head, del);

    if (head == NULL)
        printf("List cleared successfully!\n");
    else
        printf("List NOT cleared!\n");

   return 0;
}*/
