/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalshoub <aalshoub@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 13:51:40 by aalshoub          #+#    #+#             */
/*   Updated: 2025/12/03 13:57:33 by aalshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include<stdio.h>
#include<string.h>*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*p;

	p = (const char *)s;
	while (n--)
	{
		if (*p == (unsigned char)c)
			return ((void *)p);
		p++;
	}
	return (NULL);
}
/*int main(void)
{
	char c[]="Ahmed";

	char *s=ft_memchr(c, 'e', sizeof(c));

	printf("%s\n",s);
	printf("%c\n",*s);


}*/
