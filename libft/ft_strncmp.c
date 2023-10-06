/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <jcavadas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:33:50 by jcavadas          #+#    #+#             */
/*   Updated: 2023/10/06 15:42:38 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if ((unsigned char)s1[i] > (unsigned char)s2[i])
			return (1);
		if ((unsigned char)s1[i] < (unsigned char)s2[i])
			return (-1);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	str1[] = "AwA EwE OwO UwU";
	char	str2[] = "AwA TwT OwO UwU";
	
	ft_putnbr_fd(ft_strncmp(str1, str2, ft_strlen(str1)), 1);
	ft_putchar_fd('\n', 1);
	return (0);
}*/