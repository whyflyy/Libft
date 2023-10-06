/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <jcavadas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:34:46 by jcavadas          #+#    #+#             */
/*   Updated: 2023/10/06 12:29:51 by jcavadas         ###   ########.fr       */
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
    ft_putnbr_fd(ft_isalnum('\n'), 1);
    ft_putchar_fd('\n', 1);
    ft_putnbr_fd(ft_isalnum('U'), 1);
    ft_putchar_fd('\n', 1);
    ft_putnbr_fd(ft_isalnum('w'), 1);
    ft_putchar_fd('\n', 1);
    ft_putnbr_fd(ft_isalnum('U'), 1);
    ft_putchar_fd('\n', 1);
    ft_putnbr_fd(ft_isalnum('2'), 1);
    ft_putchar_fd('\n', 1);
    return (0);
}
*/
