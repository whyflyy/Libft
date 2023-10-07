/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <jcavadas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:52:04 by jcavadas          #+#    #+#             */
/*   Updated: 2023/10/07 18:49:55 by jcavadas         ###   ########.fr       */
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
	t_list *newNode = malloc(sizeof(t_list));
    if (newNode == NULL) {
        return 1;
    }
    newNode->content = "UwU";
    newNode->next = NULL;

    // Creating a linked list
    t_list *head = malloc(sizeof(t_list));
    if (head == NULL) {
        free(newNode);
        return 1;
    }
    head->content = "OwO";
    head->next = NULL;

    // Adding the new node to the front of the linked list
    ft_lstadd_front(&head, newNode);

    //TRYING WITH ADDING ANOTHER ONE
    t_list *teste = malloc(sizeof(t_list));
    if (teste == NULL) {
        return 1;
    }
    teste->content = "AwA";
    teste->next = NULL;

    ft_lstadd_front(&head, teste);

    //TRYING WITH ADDING ANOTHER ONE
    t_list *teste1 = malloc(sizeof(t_list));
    if (teste1 == NULL) {
        return 1;
    }
    teste1->content = "EwE";
    teste1->next = NULL;

    ft_lstadd_front(&head, teste1);
	
    // Printing the linked list to verify the result
    t_list *current = head;
    while (current != NULL) {
        ft_putendl_fd(current->content, 1);
        current = current->next;
    }
    //printf("NULL\n");

    // Freeing the allocated memory
   
    //free(head);

	current = ft_lstlast(head);

	ft_putstr_fd("Last from the List: ", 1);
	ft_putendl_fd(current -> content, 1);
	free(newNode);

    return (0);
}*/
