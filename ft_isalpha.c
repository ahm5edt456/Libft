/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalshoub <aalshoub@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 10:39:44 by aalshoub          #+#    #+#             */
/*   Updated: 2025/12/11 15:59:18 by aalshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.c>*/

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*int main(void)
{
    char tests[] = {'A', 'z', 'M', '1', '@', ' ', 'b'};
    int i = 0;

    while (i < 7)
    {
        char c = tests[i];
        if (ft_isalpha(c))
            printf("'%c' is alphabetic\n", c);
        else
            printf("'%c' is NOT alphabetic\n", c);
        i++;
    }

    return 0;
}*/
