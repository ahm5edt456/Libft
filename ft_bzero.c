/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalshoub <aalshoub@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 14:49:38 by aalshoub          #+#    #+#             */
/*   Updated: 2025/12/03 13:29:37 by aalshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*b;
	size_t			c;

	b = (unsigned char *)s;
	c = 0;
	while (c < n)
	{
		b[c] = 0;
		c++;
	}
}
/*int  main(void)
{
	unsigned char z[30] = "Ahmed Alshoubaki";
	size_t i;

	i = 0;
	while(i < 30)
	{
		printf("%d ", z[i]);
		i++;
	}
	printf("\n");
	ft_bzero(z , 9);
	printf("\n");
	while (i < 30)
	{
		printf("%d ",z[i]);
		i++;
	}
	printf("\n");
	return 0;
}*/
