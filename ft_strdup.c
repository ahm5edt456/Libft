/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalshoub <aalshoub@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 19:49:18 by aalshoub          #+#    #+#             */
/*   Updated: 2025/12/04 11:46:40 by aalshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
 * #inclde <stddef.h>*/
char	*ft_strdup(const char *s)
{
	char	*d;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	d = (char *)malloc(ft_strlen(s) + 1);
	if (!d)
		return (NULL);
	while (s[i])
	{
		d[i] = s[i];
		i++;
	}
	d [i] = '\0';
	return (d);
}
/*int main(void)
{
	char	*O="Hello Ahmed";
	char	*c= ft_strdup(O);

	printf("%s", c);
	free(c);
	return	0;
}*/
