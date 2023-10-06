/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <jcavadas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:33:13 by jcavadas          #+#    #+#             */
/*   Updated: 2023/10/06 15:44:15 by jcavadas         ###   ########.fr       */
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
	char	c = 'e';

	ft_putendl_fd(ft_strrchr(str, c), 1);
	return (0);
}*/