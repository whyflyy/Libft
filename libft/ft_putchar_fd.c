/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <jcavadas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:21:44 by jcavadas          #+#    #+#             */
/*   Updated: 2023/10/06 15:33:53 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(void)
{
	ft_putchar_fd('U', 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd('w', 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd('U', 1);
	ft_putchar_fd('\n', 1);
	return (0);
}*/
