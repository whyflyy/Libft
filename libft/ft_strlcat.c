/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <jcavadas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 09:27:01 by jcavadas          #+#    #+#             */
/*   Updated: 2023/10/09 11:36:20 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	destlen;
	size_t	srclen;
	size_t	i;
	size_t	j;

	if (size == 0)
		return (ft_strlen(src));
	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	i = 0;
	j = destlen;
	if (destlen >= size)
		return (size + srclen);
	while (src[i] != '\0' && i < size - destlen - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (destlen + srclen);
}
/*
int	main(void)
{
	char	dest[] = "Nos vamos ser";
	char	src[] = "concatenadas";

	ft_putnbr_fd(ft_strlcat(dest, src, 25), 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd(dest, 1);
	return (0);
}*/
