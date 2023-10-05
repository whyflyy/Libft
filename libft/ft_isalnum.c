/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <jcavadas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:34:46 by jcavadas          #+#    #+#             */
/*   Updated: 2023/10/05 10:30:15 by jcavadas         ###   ########.fr       */
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
