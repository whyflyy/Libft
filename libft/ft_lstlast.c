/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <jcavadas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:52:04 by jcavadas          #+#    #+#             */
/*   Updated: 2023/10/10 10:31:44 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next)
		lst = lst -> next;
	return (lst);
}
/*
int	main(void)
{
	// Creating a linked list
    t_list **list = malloc(sizeof(t_list) * 3);
    if (list == NULL) {
        return 1;
    }
    
	t_list *newNode = malloc(sizeof(t_list));
    if (newNode == NULL) {
        return 1;
    }
    newNode->content = "UwU";
    newNode->next = NULL;
    ft_lstadd_front(list, newNode);

    //TRYING WITH ADDING ANOTHER ONE
    t_list *teste = malloc(sizeof(t_list));
    if (teste == NULL) {
        return 1;
    }
    teste->content = "AwA";
    teste->next = NULL;
    ft_lstadd_front(list, teste);

    //ADDING YET ANOTHER ONE
    t_list *teste1 = malloc(sizeof(t_list));
    if (teste1 == NULL) {
        return 1;
    }
    teste1->content = "EwE";
    teste1->next = NULL;
    ft_lstadd_front(list, teste1);
	
    // Printing the linked list to verify the result
    t_list *current = *list;
    while (current != NULL) {
        ft_putendl_fd(current->content, 1);
        current = current->next;
    }
	current = ft_lstlast(*list);

	ft_putstr_fd("Last from the List: ", 1);
	ft_putendl_fd(current -> content, 1);
	free(newNode);
    return (0);
}*/
