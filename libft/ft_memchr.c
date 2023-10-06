/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <jcavadas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:48:16 by jcavadas          #+#    #+#             */
/*   Updated: 2023/10/06 12:40:01 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	c = (unsigned char)c;
	while (n && *str != c)
	{
		++str;
		--n;
	}
	if (n)
		return ((void *)str);
	else
		return (NULL);
}
/*
int	main(void)
{
	char	str[] = "Find me if u can!";
	char	c = 'i';

	ft_putendl_fd(ft_memchr(str, c, ft_strlen(str)), 1);
	return (0);
}*/
