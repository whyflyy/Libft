/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <jcavadas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:37:36 by jcavadas          #+#    #+#             */
/*   Updated: 2023/10/04 10:56:47 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n && *str1 == *str2)
	{
		++str1;
		++str2;
		--n;
	}
	if (n)
		return (*str1 - *str2);
	else
		return (0);
}
/*
int	main(void)
{
	char	str1[] = "Somos diferentes?";
	char	str2[] = "Somos diferentes!";
	
	printf("%d", ft_memcmp(str1, str2, 17));
	ft_putchar_fd('\n', 1);
}*/
