/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <jcavadas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:09:44 by jcavadas          #+#    #+#             */
/*   Updated: 2023/10/03 12:51:34 by jcavadas         ###   ########.fr       */
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
		write(1, &cenas[i], 1);
		i++;
	}
	return (0);
}*/
