/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalshoub <aalshoub@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 08:47:49 by aalshoub          #+#    #+#             */
/*   Updated: 2025/12/16 18:42:01 by aalshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stddef.h>*/

static size_t	intlen(long n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
	{
		i++;
		if (n < 0)
			n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	x;
	size_t	i;
	char	*str;

	x = (long)n;
	i = intlen(x);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = '\0';
	if (x == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (x < 0)
		x *= -1;
	while (i > 0)
	{
		str[--i] = (x % 10) + '0';
		x /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
/*t main (void)
{
	int number[] = {0, 42,-42,237224,3274287, INT_MAX, INT_MIN};
	size_t n ;
	size_t i ;
	char *s;
	
	n = sizeof(number)/sizeof(number[0]);
	i = 0;
	while (i < n)
	{
		s= ft_itoa(number[i]);

		if (s)
		{
			printf("%s\n",s);
			free(s);
		}
		i++;
	}
	return (0);

}*/
