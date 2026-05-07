/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalshoub <aalshoub@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 19:39:32 by aalshoub          #+#    #+#             */
/*   Updated: 2025/12/10 18:22:18 by aalshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
 * #include <stddef.h>*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	t;
	size_t	i;
	char	*ptr;

	t = nmemb * size;
	if (size != 0 && ((t / size) != nmemb))
		return (NULL);
	ptr = malloc(t);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < nmemb * size)
		ptr[i++] = 0;
	return (ptr);
}
/*int main(void)
{
	int	*arr;
	size_t	n = 5;

	arr = (int *)ft_calloc(n,sizeof(int))
	size_t i = 0;
	while (i < n)
		printf("%d", arr[i]);
	free(arr);
	return 0;
}*/
