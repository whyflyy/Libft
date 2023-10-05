/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <jcavadas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:36:51 by jcavadas          #+#    #+#             */
/*   Updated: 2023/10/05 10:30:33 by jcavadas         ###   ########.fr       */
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
    printf("%ld\n", ft_strlen("AwA OwO EwE"));
    printf("%ld\n", ft_strlen("ehe\0UwUw"));
    printf("%ld\n", ft_strlen("ahahahahahahahahahahha"));
    return (0);
}
*/
