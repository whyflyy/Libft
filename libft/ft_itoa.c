/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <jcavadas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:51:28 by jcavadas          #+#    #+#             */
/*   Updated: 2023/10/06 12:39:10 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putonres(int n, int dig, int i, char *res)
{
	while (i < dig)
	{
		res[dig - 1] = n % 10 + '0';
		n /= 10;
		dig--;
	}
}

static int	ft_countdig(int n)
{
	int	res;

	res = 0;
	if (n <= 0)
		res++;
	while (n != 0)
	{
		n = n / 10;
		res++;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		dig;
	int		i;

	dig = ft_countdig(n);
	res = (char *)malloc(sizeof(char) * (dig + 1));
	if (!res)
		return (NULL);
	i = 0;
	if (n == -2147483648)
	{
		res[i++] = '-';
		res[i++] = '2';
		n = 147483648;
	}
	if (n < 0)
	{
		res[i++] = '-';
		n *= -1;
	}
	ft_putonres(n, dig, i, res);
	res[dig] = '\0';
	return (res);
}
/*
int main(void)
{
	int	i = 69;
	int	j = -420;
	int	min = -2147483648;
	int	max = 2147483647;

	ft_putendl_fd(ft_itoa(i), 1);
	ft_putendl_fd(ft_itoa(j), 1);
	ft_putendl_fd(ft_itoa(min), 1);
	ft_putendl_fd(ft_itoa(max), 1);
	return (0);
}
*/