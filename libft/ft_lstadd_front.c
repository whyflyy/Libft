/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <jcavadas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 10:29:51 by jcavadas          #+#    #+#             */
/*   Updated: 2023/10/09 12:46:16 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new -> next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	// Creating a linked list
    t_list *head = malloc(sizeof(t_list));
    if (head == NULL) {
        return 1;
    }
    head->content = "OwO";
    head->next = NULL;
	
	//Creating a Node to add to the front of the list
	t_list *newNode = malloc(sizeof(t_list));
    if (newNode == NULL) {
        return 1;
    }
    newNode->content = "UwU";
    newNode->next = NULL;
	
    // Adding the new node to the front of the list
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
    free(newNode);
    //free(head);

    return (0);
}*/
