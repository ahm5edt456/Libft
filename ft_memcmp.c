/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalshoub <aalshoub@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 16:23:42 by aalshoub          #+#    #+#             */
/*   Updated: 2025/12/03 17:15:02 by aalshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
#include <string.h>*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*x;
	const char	*y;
	size_t		i;

	x = (const char *)s1;
	y = (const char *)s2;
	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (i < n && x[i] == y[i])
	{
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)x[i] - (unsigned char)y[i]);
}
/*int main (void)
{
	char a[]="Ahmed Alshoubaki";
	char s[]="Ahmed";
	int p = ft_memcmp(a, s, sizeof(s));
	printf("%d",p);
}*/
