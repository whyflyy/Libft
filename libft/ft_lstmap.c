/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <jcavadas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:59:25 by jcavadas          #+#    #+#             */
/*   Updated: 2023/10/10 16:38:54 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_reset(t_list *lst, void *content, void (*del)(void *))
{
	if (del && content)
		del(content);
	ft_lstclear(&lst, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*temp;
	void	*content;

	list = NULL;
	while (lst)
	{
		content = f(lst->content);
		if (!content)
			return (ft_reset(list, content, del));
		temp = ft_lstnew(content);
		if (!temp)
			return (ft_reset(list, content, del));
		ft_lstadd_back(&list, temp);
		lst = lst -> next;
	}
	return (list);
}
