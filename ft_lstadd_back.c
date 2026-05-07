/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalshoub <aalshoub@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 15:21:23 by aalshoub          #+#    #+#             */
/*   Updated: 2025/12/13 15:01:55 by aalshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next)
		last = last->next;
	last->next = new;
}
/*#include <stdio.h>

int main(void)
{
    t_list *head = NULL;

    t_list *node1 = ft_lstnew("One");
    t_list *node2 = ft_lstnew("Two");
    t_list *node3 = ft_lstnew("Three");

    // إضافة أول عنصر (القائمة كانت فاضية)
    ft_lstadd_back(&head, node1);

    // إضافة ثاني عنصر
    ft_lstadd_back(&head, node2);

    // إضافة ثالث عنصر
    ft_lstadd_back(&head, node3);

    // طباعة القائمة
    t_list *tmp = head;
    int i = 1;

    while (tmp)
    {
        printf("Node %d content: %s\n", i, (char *)tmp->content);
        tmp = tmp->next;
        i++;
    }

    return 0;
}*/
