/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:35:11 by jcavadas          #+#    #+#             */
/*   Updated: 2023/10/03 10:35:31 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
/*
int main(void)
{
    printf("%d\n", ft_isalpha('\n'));
    printf("%d\n", ft_isalpha('U'));
    printf("%d\n", ft_isalpha('w'));
    printf("%d\n", ft_isalpha('U'));
    printf("%d\n", ft_isalpha('2'));
    return (0);
}
*/
