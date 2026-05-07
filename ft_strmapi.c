/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalshoub <aalshoub@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 08:58:26 by aalshoub          #+#    #+#             */
/*   Updated: 2025/12/07 12:13:32 by aalshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
#include <stdlib.h>*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	i = 0;
	if (!s || !f)
		return (NULL);
	res = (char *)malloc(ft_strlen(s) + 1);
	if (!res)
		return (NULL);
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*char	add_index(unsigned int i, char c)
{
	return (c + i);
}
int main(void)
{
	char *s = ft_strmapi(" abca", add_index);
	printf("Result : %s\n", s);
	free(s);
}*/
