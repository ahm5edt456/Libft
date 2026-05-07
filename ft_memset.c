/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalshoub <aalshoub@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 16:18:57 by aalshoub          #+#    #+#             */
/*   Updated: 2025/12/03 13:18:47 by aalshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
#include <string.h>*/

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*int main (void)
{
	char org[20] ="Hello World";
	char mr[20] ="Hello world";

	memset (org,'$',5);
	ft_memset(mr,'$',5);

	printf("Orginal : %s\n",org);
	printf("My_ft_:%s\n",mr);
	return 0;
}*/
