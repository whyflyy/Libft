/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <jcavadas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 10:02:42 by jcavadas          #+#    #+#             */
/*   Updated: 2023/10/09 09:38:56 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (0);
	new -> content = content;
	new -> next = NULL;
	return (new);
}
/*
int	main(void)
{
	char	*str;
	t_list	*lst;

	str = (char *)malloc(sizeof(char) * 16);
	str = "AwA EwE OwO UwU";
	lst = ft_lstnew((void *)str);
	ft_putendl_fd(lst -> content, 1);
	free(lst);
	return (0);
}*/
