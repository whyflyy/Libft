/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <jcavadas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:00:28 by jcavadas          #+#    #+#             */
/*   Updated: 2023/10/06 16:14:19 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c -= 32);
	else
		return (c);
}
/*
int	main(void)
{
	ft_putchar_fd(ft_toupper('U'), 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd(ft_toupper('w'), 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd(ft_toupper('U'), 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd(ft_toupper('5'), 1);
	ft_putchar_fd('\n', 1);
}*/
