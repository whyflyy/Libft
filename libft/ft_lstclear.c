/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <jcavadas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:36:32 by jcavadas          #+#    #+#             */
/*   Updated: 2023/10/10 15:49:48 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*list;

	if (!lst || ! del)
		return ;
	list = *lst;
	while (list)
	{
		temp = list -> next;
		(*del)(list -> content);
		free(list);
		list = temp;
	}
	*lst = NULL;
}
