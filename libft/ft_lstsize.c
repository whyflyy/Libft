/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <jcavadas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:23:54 by jcavadas          #+#    #+#             */
/*   Updated: 2023/10/10 10:31:59 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst -> next;
		++i; 
	}
	return (i);
}
/*
int	main(void)
{
    // Creating a linked list
    t_list *list = malloc(sizeof(t_list));
    if (list == NULL) {
        return 1;
    }
    list->content = "OwO";
    list->next = NULL;
    
	t_list *newNode = malloc(sizeof(t_list));
    if (newNode == NULL) {
        return 1;
    }
    newNode->content = "UwU";
    newNode->next = NULL;


    // Adding the new node to the front of the linked list
    ft_lstadd_front(&list, newNode);

    //TRYING WITH ADDING ANOTHER ONE
    t_list *teste = malloc(sizeof(t_list));
    if (teste == NULL) {
        return 1;
    }
    teste->content = "AwA";
    teste->next = NULL;
    ft_lstadd_front(&list, teste);

    //TRYING WITH ADDING ANOTHER ONE
    t_list *teste1 = malloc(sizeof(t_list));
    if (teste1 == NULL) {
        return 1;
    }
    teste1->content = "EwE";
    teste1->next = NULL;
    ft_lstadd_front(&list, teste1);
	
    // Printing the linked list to verify the result
    t_list *current = list;
    while (current != NULL) {
        ft_putendl_fd(current->content, 1);
        current = current->next;
    }

	ft_putstr_fd("Size: ", 1);
	ft_putnbr_fd(ft_lstsize(list), 1);
	ft_putchar_fd('\n', 1);
    free(list);
    return (0);
}*/