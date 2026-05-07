/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalshoub <aalshoub@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 15:11:35 by aalshoub          #+#    #+#             */
/*   Updated: 2025/12/10 17:20:57 by aalshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include<stdio.h>
#include<stddef.h>*/

char	*ft_strrchr(const char *s, int c)
{
	char	*lest;
	char	ch;

	ch = (char)c;
	lest = NULL;
	while (*s)
	{
		if (*s == ch)
			lest = (char *)s;
		s++;
	}
	if (ch == '\0')
		return ((char *)s);
	return (lest);
}
/*int main (void)
{
	char s[]="Ahmed Ahmed eee WEdfhjshjaafhfjejsdkdfjjglv";
	char *g=ft_strrchr(s, 'e');

	printf("G :%s\n",g);
}*/
