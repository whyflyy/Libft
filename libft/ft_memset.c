/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <jcavadas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:02:27 by jcavadas          #+#    #+#             */
/*   Updated: 2023/10/06 15:31:25 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*string;

	string = (char *)s;
	i = 0;
	while (i < n)
	{
		string[i] = c;
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	char	cenas[] = "AwA OwO EwE Idek anymore";

	ft_putendl_fd(ft_memset(cenas,'E',4), 1);
	return (0);
}*/
