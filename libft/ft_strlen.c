/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <jcavadas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:36:51 by jcavadas          #+#    #+#             */
/*   Updated: 2023/10/06 15:41:35 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}
/*
int main(void)
{
	ft_putnbr_fd(ft_strlen("AwA OwO EwE"), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_strlen("ehe\0UwUw"), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_strlen("ahahahahahahahahahahha"), 1);
	ft_putchar_fd('\n', 1);
    return (0);
}*/

