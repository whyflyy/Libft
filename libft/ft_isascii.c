/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <jcavadas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:35:50 by jcavadas          #+#    #+#             */
/*   Updated: 2023/10/05 10:30:21 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
int main(void)
{
    printf("%d\n", ft_isascii(20));
    printf("%d\n", ft_isascii(60));
    printf("%d\n", ft_isascii(128));
    printf("%d\n", ft_isascii(200));
    return (0);
}
*/
