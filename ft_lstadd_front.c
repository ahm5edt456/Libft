/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalshoub <aalshoub@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 15:21:09 by aalshoub          #+#    #+#             */
/*   Updated: 2025/12/13 15:17:34 by aalshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*#include <stdio.h>
int main(void)
{
    t_list *head = NULL;
    t_list *node1;
    t_list *node2;
    t_list *node3;

    // إنشاء 3 عقد
    node1 = ft_lstnew("First");
    node2 = ft_lstnew("Second");
    node3 = ft_lstnew("Third");

    // إضافة node1 كأول عنصر
    ft_lstadd_front(&head, node1);

    // إضافة node2 في المقدمة
    ft_lstadd_front(&head, node2);

    // إضافة node3 في المقدمة
    ft_lstadd_front(&head, node3);

    // طباعة القائمة
    t_list *temp = head;
    int i = 1;
    while (temp)
    {
        printf("Node %d content: %s\n", i, (char *)temp->content);
        temp = temp->next;
        i++;
    }

    return 0;
}*/
