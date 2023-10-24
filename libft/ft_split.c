/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <jcavadas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:21:29 by jcavadas          #+#    #+#             */
/*   Updated: 2023/10/11 11:23:21 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_charcount(char const *s, char c, size_t i)
{
	size_t	size;

	size = 0;
	while (s[i] && s[i] != c)
	{
		size++;
		i++;
	}
	return (size);
}

static int	ft_occurence(char const *s, char c)
{
	int	word_count;

	word_count = 0;
	while (*s)
	{
		while (*s == c)
			++s;
		if (*s)
			++word_count;
		while (*s && *s != c)
			++s;
	}
	return (word_count);
}

static void	*ft_free(char **splitted_s, size_t i)
{
	while (i--)
		free(splitted_s[i]);
	free(splitted_s);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	len;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	j = 0;
	i = 0;
	len = ft_occurence(s, c);
	res = (char **)malloc(sizeof(char *) * (len + 1));
	if (!res)
		return (NULL);
	while (j < len)
	{
		while (s[i] == c)
			i++;
		res[j] = ft_substr(s, i, ft_charcount(s, c, i));
		if (!res[j++])
			return (ft_free(res, j));
		i += ft_charcount(s, c, i);
	}
	res[j] = NULL;
	return (res);
}
/*
int	main(void)
{
	char	s[] = "BadaBim Badaboom, Mr. Worldwide !";
	char	c = ' ';
	char	**split = ft_split(s, c);
	int		i = 0;

	while (split[i] != 0)
	{
		ft_putendl_fd(split[i], 1);
		i++;
	}
}*/
