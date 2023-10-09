/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <jcavadas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 09:44:13 by jcavadas          #+#    #+#             */
/*   Updated: 2023/10/09 09:48:59 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return ((size_t)ft_strlen(src));
	while (i < (size - 1) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return ((size_t)ft_strlen(src));
}
/*
int	main(void)
{
	char	dest[] = "Ninguem me tira daqui!";
	char	src[] = "Eu vou ser copiada";

	ft_putnbr_fd(ft_strlcpy(dest, src, 25), 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd(dest, 1);
	return (0);
}*/
