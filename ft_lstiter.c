/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalshoub <aalshoub@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 15:19:29 by aalshoub          #+#    #+#             */
/*   Updated: 2025/12/13 15:18:13 by aalshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*#include <stdio.h>

void print_content(void *content)
{
    printf("%s\n", (char *)content);
}

int main(void)
{
    t_list *head = NULL;

    t_list *node1 = ft_lstnew("Apple");
    t_list *node2 = ft_lstnew("Banana");
    t_list *node3 = ft_lstnew("Cherry");

    ft_lstadd_back(&head, node1);
    ft_lstadd_back(&head, node2);
    ft_lstadd_back(&head, node3);

    // تطبيق ft_lstiter لطباعة محتويات كل عنصر
    ft_lstiter(head, print_content);

    return 0;
}*/
