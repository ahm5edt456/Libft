/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalshoub <aalshoub@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 15:10:10 by aalshoub          #+#    #+#             */
/*   Updated: 2025/12/04 15:31:33 by aalshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
#include <stdlib.h>*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	t;
	char	*s;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	t = i + j + 1;
	s = (char *)malloc(t);
	if (!s)
		return (NULL);
	s[0] = '\0';
	ft_strlcat(s, s1, t);
	ft_strlcat(s, s2, t);
	return (s);
}
/*int main(void)
{
	char s[] ="Ahmed";
	char r[] = "Alshoubaki";
	char *d =ft_strjoin(s, r);
	
	printf("d:%s\n", d);
}*/
