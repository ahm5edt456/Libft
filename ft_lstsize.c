/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalshoub <aalshoub@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 15:21:49 by aalshoub          #+#    #+#             */
/*   Updated: 2025/12/13 15:18:45 by aalshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

/*#include <stdio.h>
int main(void)
{
    t_list *head = NULL;

    // إنشاء 3 عقد
    t_list *node1 = ft_lstnew("A");
    t_list *node2 = ft_lstnew("B");
    t_list *node3 = ft_lstnew("C");

    // ربط العقد (A -> B -> C)
    head = node1;
    node1->next = node2;
    node2->next = node3;

    // اختبار ft_lstsize
    int size = ft_lstsize(head);
    printf("List size = %d\n", size);

    return 0;
}*/
