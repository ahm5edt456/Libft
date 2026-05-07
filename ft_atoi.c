/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalshoub <aalshoub@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 18:37:06 by aalshoub          #+#    #+#             */
/*   Updated: 2025/12/10 18:07:34 by aalshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <ctype.h>
//#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int		i;
	int		s;
	long	r;

	i = 0;
	r = 0;
	s = 1;
	if (!nptr)
		return (0);
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
	{
		i++;
	}
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			s = -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		r = r * 10 + (nptr[i] - '0');
		i++;
	}
	return ((int)(r * s));
}
/*int main (void)
{
	printf("%d\n",ft_atoi("----+yuyut892378364");
			return (0);
}*/
