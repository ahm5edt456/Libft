/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalshoub <aalshoub@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 08:23:09 by aalshoub          #+#    #+#             */
/*   Updated: 2025/12/03 17:11:10 by aalshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include<stdio.h>
#include<stddef.h>*/

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
//int main (void)
//{
//	char	c[]="Ahmed Alshoubaki";
//	char	d[20];
//	size_t r;
//
//	r= ft_strlcpy(d, c, sizeof(d));
//
//	printf("d : %s\n",d);
//	
//	printf("r: %zu\n",r);
//
//	return 0;
//}
