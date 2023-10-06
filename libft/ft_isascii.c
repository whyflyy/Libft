/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <jcavadas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:35:50 by jcavadas          #+#    #+#             */
/*   Updated: 2023/10/06 12:34:27 by jcavadas         ###   ########.fr       */
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
	ft_putnbr_fd(ft_isascii(20), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isascii(60), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isascii(128), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isascii(200), 1);
	ft_putchar_fd('\n', 1);
	return (0);
}
*/
