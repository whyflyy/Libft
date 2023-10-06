/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <jcavadas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:10:49 by jcavadas          #+#    #+#             */
/*   Updated: 2023/10/06 12:18:25 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		if (n == -2147483648)
		{
			ft_putstr_fd("-2147483648", fd);
			return ;
		}
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n / 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd('0' + n, fd);
}
/*
int	main(void)
{
	int	i = 69;
	int	j = -420;
	int	min = -2147483648;
	int	max = 2147483647;

	ft_putnbr_fd(i, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(j, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(min, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(max, 1);
	ft_putchar_fd('\n', 1);
}*/
