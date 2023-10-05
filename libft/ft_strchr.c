/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <jcavadas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 09:44:04 by jcavadas          #+#    #+#             */
/*   Updated: 2023/10/05 10:30:30 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while ((s[i] != (char)c) && (s[i] != '\0'))
		i++;
	if (s[i] != (char)c)
		return (NULL);
	else
		return ((char *)&s[i]);
}
/*
int	main(void)
{
	char	str[] = "Find me if u can!";
	char	c = '!';

	ft_putstr_fd(ft_strchr(str, c), 1);
	ft_putchar_fd('\n', 1);
	return (0);
}*/