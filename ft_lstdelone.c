/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalshoub <aalshoub@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 15:19:51 by aalshoub          #+#    #+#             */
/*   Updated: 2025/12/13 15:01:07 by aalshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*#include <stdio.h>

// دالة del التي ستحذف محتوى الـ node
void my_delete(void *content)
{
    free(content);
}

int main(void)
{
    // إنشاء محتوى ديناميكي ليتم حذفه فعلاً
    char *str = malloc(6);
    if (!str)
        return 1;
    str[0] = 'H';
    str[1] = 'e';
    str[2] = 'l';
    str[3] = 'l';
    str[4] = 'o';
    str[5] = '\0';

    // إنشاء node واحدة
    t_list *node = ft_lstnew(str);

    // قبل الحذف
    printf("Before delete: %s\n", (char *)node->content);

    // حذف node
    ft_lstdelone(node, my_delete);

    printf("Node deleted successfully.\n");

    return 0;
}*/
