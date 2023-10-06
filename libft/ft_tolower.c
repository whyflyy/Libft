/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <jcavadas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:00:36 by jcavadas          #+#    #+#             */
/*   Updated: 2023/10/06 16:13:16 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c += 32);
	else
		return (c);
}
/*
int	main(void)
{
	ft_putchar_fd(ft_tolower('U'), 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd(ft_tolower('w'), 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd(ft_tolower('U'), 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd(ft_tolower('5'), 1);
	ft_putchar_fd('\n', 1);
}*/
