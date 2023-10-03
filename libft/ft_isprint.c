/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:36:24 by jcavadas          #+#    #+#             */
/*   Updated: 2023/10/03 09:46:35 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
int main(void)
{
    printf("%d\n", ft_isprint(2));
    printf("%d\n", ft_isprint(69));
    printf("%d\n", ft_isprint(45));
    printf("%d\n", ft_isprint(127));
    return (0);
}
*/
