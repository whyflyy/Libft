/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <jcavadas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:25:16 by jcavadas          #+#    #+#             */
/*   Updated: 2023/10/10 16:20:21 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	nb;
	int	nop;

	i = 0;
	nb = 0;
	nop = 1;
	while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n' 
		|| nptr[i] == '\r' || nptr[i] == '\f' || nptr[i] == '\v')
		i++;
	if (nptr[i] == '+')
		i++;
	else if (nptr[i] == '-')
	{
		nop = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nb = nb * 10 + (nptr[i] - '0');
		i++;
	}
	return (nb * nop);
}
/*
int	main(void)
{
	ft_putnbr_fd(ft_atoi("	-12345678"), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_atoi("42"), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_atoi("+1234a5678"), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_atoi("--12"), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_atoi("ABC"), 1);
	ft_putchar_fd('\n', 1);
	return (0);
}*/
