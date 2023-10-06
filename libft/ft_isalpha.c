/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <jcavadas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:35:11 by jcavadas          #+#    #+#             */
/*   Updated: 2023/10/06 12:31:40 by jcavadas         ###   ########.fr       */
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
    ft_putnbr_fd(ft_isalpha('\n'), 1);
    ft_putchar_fd('\n', 1);
    ft_putnbr_fd(ft_isalpha('U'), 1);
    ft_putchar_fd('\n', 1);
    ft_putnbr_fd(ft_isalpha('w'), 1);
    ft_putchar_fd('\n', 1);
    ft_putnbr_fd(ft_isalpha('U'), 1);
    ft_putchar_fd('\n', 1);
    ft_putnbr_fd(ft_isalpha('2'), 1);
    ft_putchar_fd('\n', 1);
    return (0);
}
*/
