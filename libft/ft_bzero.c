/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <jcavadas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:09:44 by jcavadas          #+#    #+#             */
/*   Updated: 2023/10/06 16:15:46 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n)
	{
		*p++ = 0;
		--n;
	}
}
/*
int	main(void)
{
	char	cenas[] = "AwA EwE OwO UwU";
	int	i;

	i = 0;
	ft_bzero(cenas, 3);
	while (i < 15)
	{
		ft_putchar_fd(cenas[i], 1);
		i++;
	}
	return (0);
}*/
