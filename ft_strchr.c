/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalshoub <aalshoub@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 13:30:10 by aalshoub          #+#    #+#             */
/*   Updated: 2025/12/10 16:42:22 by aalshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include<string.h>

char	*ft_strchr(const char *s, int c)
{
	char	ch;

	ch = (char)c;
	while (*s)
	{
		if (*s == ch)
			return ((char *)s);
		s++;
	}
	if (ch == '\0')
		return ((char *)s);
	return (NULL);
}
/*int main(void)
{
	char	s[]="Mester Ahmed Alshoubaki ";
	char	*p= ft_strchr(s,'m');
	if(p)
		printf("S: %s\n",p);
	else
		printf(" ");
	return 0;
}*/
