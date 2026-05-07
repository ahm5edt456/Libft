/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalshoub <aalshoub@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 16:17:45 by aalshoub          #+#    #+#             */
/*   Updated: 2025/12/03 13:35:26 by aalshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include<stdio.h>
#include<string.h>
#include<stddef.h>*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*c;
	const char	*d;
	size_t		i;

	c = (char *)dest;
	d = (const char *)src;
	i = 0;
	while (i < n)
	{
		c[i] = d[i];
		i++;
	}
	return (c);
}
/*int main(void)
{
	char 	x[] ="Hello,World";
	char	u[18];
	ft_memcpy(u, x ,sizeof(x));
	printf("x : %s\n",x);
	printf("u :%s\n",u);
	
	int	y[]={1,2,3,5,6,7};
	int	e[6];

	int i =0;
	ft_memcpy(e, y, sizeof(y));
	while(i < 6)
	{
		printf("%d ",e[i]);
		i++;
	}
	return 0;
}*/
