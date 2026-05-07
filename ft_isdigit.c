/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalshoub <aalshoub@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 11:27:22 by aalshoub          #+#    #+#             */
/*   Updated: 2025/12/11 17:15:30 by aalshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/*int main(void)
{
    char test1 = '5';
    char test2 = 'a';
    char test3 = '0';
    char test4 = '9';
    char test5 = ' ';

    printf("Test '%c': %d\n", test1, ft_isdigit(test1));
    printf("Test '%c': %d\n", test2, ft_isdigit(test2));
    printf("Test '%c': %d\n", test3, ft_isdigit(test3));
    printf("Test '%c': %d\n", test4, ft_isdigit(test4));
    printf("Test '%c': %d\n", test5, ft_isdigit(test5));

    return 0;
}*/
