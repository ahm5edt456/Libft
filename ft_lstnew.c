/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalshoub <aalshoub@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 15:11:20 by aalshoub          #+#    #+#             */
/*   Updated: 2025/12/13 14:57:57 by aalshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*int	main(void)
{
	t_list	*node;

	node = ft_lstnew("Hello");
	if (node)
	{
		printf("node con : %s\n",(char *)node ->content);
		printf("Next node:%p\n", (void *)node ->next);
	}
		free(node);
	return 0;
}*/
