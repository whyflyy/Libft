/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <jcavadas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:36:07 by jcavadas          #+#    #+#             */
/*   Updated: 2023/10/06 12:36:26 by jcavadas         ###   ########.fr       */
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
    ft_putnbr_fd(ft_isdigit('2'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isdigit('7'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isdigit('a'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isdigit('\n'), 1);
	ft_putchar_fd('\n', 1);
    return (0);
}
*/
