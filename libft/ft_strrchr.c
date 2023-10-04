/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <jcavadas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:33:13 by jcavadas          #+#    #+#             */
/*   Updated: 2023/10/04 11:14:22 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)&(str[i]));
		i--;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	str[] = "Teste";
	char	c = '\0';

	ft_putstr_fd(ft_strrchr(str, c), 1);
	ft_putchar_fd('\n', 1);
	return (0);
}*/