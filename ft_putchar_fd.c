/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalshoub <aalshoub@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 13:02:33 by aalshoub          #+#    #+#             */
/*   Updated: 2025/12/07 17:13:48 by aalshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
//#include <unistd.h>
void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
