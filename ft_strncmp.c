/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalshoub <aalshoub@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 15:42:04 by aalshoub          #+#    #+#             */
/*   Updated: 2025/12/04 14:25:21 by aalshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include<stdio.h>
#include<string.h>*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (!s1 || !s2)
		return (0);
	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
/*int main(void)
{
	char *a= "Ahme";
	char	*b="Ahmad";
	char *c="Ahmed";

	int res1=ft_strncmp(a, c, 5);
	printf("'%s'whith'%s' : %d\n ",a,c, res1);
	int res2=ft_strncmp(a, b, 5);
	printf("'%s'whith '%s' : %d\n",a,b,res2);
	int res3=ft_strncmp(b,c,5);
	printf("'%s'with'%s':%d\n",b,c,res3);
	int rec4 =ft_strncmp(NULL, NULL, 5);
	printf(" %d\n", rec4);
	return 0;
	
}*/
