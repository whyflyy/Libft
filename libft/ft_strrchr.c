/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <jcavadas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:33:13 by jcavadas          #+#    #+#             */
/*   Updated: 2023/10/03 15:56:16 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str)
	{
		if (*str == (unsigned char)c)
			return (str);
		str++;	
	}
	if (c == 0)
		return (str);
	return (NULL);
}
/*
int	main(void)
{
	char	str[] = "Find me if u can!";
	char	c = '!';

	ft_putstr_fd(ft_strrchr(str, c), 1);
	ft_putchar_fd('\n', 1);
	return (0);
}*/