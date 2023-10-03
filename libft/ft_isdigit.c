/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:36:07 by jcavadas          #+#    #+#             */
/*   Updated: 2023/10/03 09:42:13 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/*
int main(void)
{
    printf("%d\n", ft_isdigit('2'));
    printf("%d\n", ft_isdigit('7'));
    printf("%d\n", ft_isdigit('a'));
    printf("%d\n", ft_isdigit('\n'));
    return (0);
}
*/
