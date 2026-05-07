/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalshoub <aalshoub@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 12:28:02 by aalshoub          #+#    #+#             */
/*   Updated: 2025/12/04 15:09:13 by aalshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*str;
	size_t		s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	i = s_len - start;
	if (i > len)
		i = len;
	str = malloc(i + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + start, i + 1);
	return (str);
}
/*int main(void)
{
	char c[] = "Ahmed Alshhoubaki";
	char *d = ft_substr(c,7,2);

	printf("d:%s\n", d);
	return (0);
}*/
