/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalshoub <aalshoub@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 15:15:52 by aalshoub          #+#    #+#             */
/*   Updated: 2025/12/13 15:10:48 by aalshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	new_list = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
// دالة تحويل المحتوى: تحول النص إلى نسخة جديدة بالحروف الكبيرة
void *to_upper(void *content)
{
    char *str = (char *)content;
    char *new_str = strdup(str); // تحتاج include <string.h> و <stdlib.h>
    if (!new_str)
        return NULL;

    for (int i = 0; new_str[i]; i++)
        new_str[i] = (char)toupper(new_str[i]);
    return new_str;
}

// دالة delete
void del(void *content)
{
    free(content);
}

int main(void)
{
    t_list *head = NULL;
    t_list *mapped = NULL;

    ft_lstadd_back(&head, ft_lstnew(strdup("apple")));
    ft_lstadd_back(&head, ft_lstnew(strdup("banana")));
    ft_lstadd_back(&head, ft_lstnew(strdup("cherry")));

    mapped = ft_lstmap(head, to_upper, del);

    // طباعة القائمة الجديدة
    t_list *tmp = mapped;
    while (tmp)
    {
        printf("%s\n", (char *)tmp->content);
        tmp = tmp->next;
    }

    ft_lstclear(&head, del);
    ft_lstclear(&mapped, del);

    return 0;
}*/
