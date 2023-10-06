/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <jcavadas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:31:16 by jcavadas          #+#    #+#             */
/*   Updated: 2023/10/06 17:40:41 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (*s != '\0')
	{
		f(i, s);
		i++;
		s++;
	}
}
/*
void	ft_test(unsigned int i, char *str)
{
	(void) i;
	*str += 1;
}

int	main()
{
	char	str[] = "abcdefghijklmnop";
	ft_striteri(str, ft_test);
	ft_putendl_fd(str, 1);
}*/