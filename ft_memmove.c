/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalshoub <aalshoub@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 17:11:24 by aalshoub          #+#    #+#             */
/*   Updated: 2025/12/07 16:02:25 by aalshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include<stdio.h>
#include<string.h>
#include<stddef.h>*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*c;
	const char	*d;
	size_t		i;

	c = (char *)dest;
	d = (const char *)src;
	if (c < d)
	{
		i = 0;
		while (i < n)
		{
			c[i] = d[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			c[i - 1] = d[i - 1];
			i--;
		}
	}
	return (c);
}
/*int main(void)
{
	char s1[]="Ahmed Alshoubaki";
	char s2[18];
	ft_memmove(s2, s1, sizeof(s1));
	printf("s2 : %s\n",s2);	
	char s3[]="Ahmed Alshoubaki";
	ft_memmove(s3+2,s3,sizeof(s3));
	printf("S3: %s\n",s3);
	char s4[]= "Ahmed Alshoubaki";
	ft_memmove(s4,s4+2,6);
	printf("s4 :%s\n ",s4);

	return (0);
}*/
