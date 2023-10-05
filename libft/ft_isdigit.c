/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <jcavadas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:36:07 by jcavadas          #+#    #+#             */
/*   Updated: 2023/10/05 10:30:22 by jcavadas         ###   ########.fr       */
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
