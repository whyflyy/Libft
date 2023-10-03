/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:34:46 by jcavadas          #+#    #+#             */
/*   Updated: 2023/10/03 09:43:56 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/*
int main(void)
{
    printf("%d\n", ft_isalnum('\n'));
    printf("%d\n", ft_isalnum('U'));
    printf("%d\n", ft_isalnum('w'));
    printf("%d\n", ft_isalnum('U'));
    printf("%d\n", ft_isalnum('2'));
    return (0);
}
*/
