/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalshoub <aalshoub@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 15:18:45 by aalshoub          #+#    #+#             */
/*   Updated: 2025/12/13 15:09:02 by aalshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
/*#include <stdio.h>

int main(void)
{
    t_list *head = NULL;

    // إنشاء 3 nodes
    t_list *node1 = ft_lstnew("First");
    t_list *node2 = ft_lstnew("Second");
    t_list *node3 = ft_lstnew("Third");

    // ربطهم مع بعض: First -> Second -> Third
    head = node1;
    node1->next = node2;
    node2->next = node3;

    // اختبار ft_lstlast
    t_list *last = ft_lstlast(head);

    if (last)
        printf("Last node content: %s\n", (char *)last->content);
    else
        printf("List is empty!\n");

    return 0;
}*/
