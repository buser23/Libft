/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <bsalgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:30:02 by bsalgado          #+#    #+#             */
/*   Updated: 2023/05/09 17:37:55 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	The ft_lstadd_back function is another function in a linked list 
	implementation in C. The purpose of ft_lstadd_back is to add a new 
	node to the end of the linked list that lst points to.

	The function first checks if lst or new is NULL, and returns 
	immediately if either one is NULL. If lst is empty (*lst is NULL), 
	it sets the head of the list to new by dereferencing lst and 
	setting its value to new. Otherwise, it finds the last node in 
	the list using a loop that iterates through the list until it 
	reaches the last node, and then sets the next pointer 
	of the last node to new.

	This implementation should work correctly for any linked list, 
	and it has the advantage of being relatively concise and easy to read.

	In this main function, we create a linked list with 3 nodes, where 
	each node's content field is a pointer to a string. Then we use 
	the ft_lstadd_back function to add a new element to the end of 
	the linked list. The new element has content "Goodbye". 
	Finally, we print the contents of the linked list to the
	console, and free the memory used by the linked list.

*/

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*curr;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		curr = *lst;
		while (curr->next)
			curr = curr->next;
		curr->next = new;
	}
}

/*
int	main(void)
{
	// Create a linked list with 3 nodes
    t_list *head = malloc(sizeof(t_list));
    head->content = "Hello";
    head->next = malloc(sizeof(t_list));
    head->next->content = "World";
    head->next->next = malloc(sizeof(t_list));
    head->next->next->content = "!";
    head->next->next->next = NULL;

    // Add a new element to the end of the linked list
    t_list *new = malloc(sizeof(t_list));
    new->content = "Goodbye";
    new->next = NULL;
    ft_lstadd_back(&head, new);

    // Print the contents of the linked list
    t_list *curr = head;
    while (curr != NULL) {
        printf("%s ", (char *) curr->content);
        curr = curr->next;
    }
    printf("\n");

    // Free the memory used by the linked list
    curr = head;
    while (curr != NULL) {
        t_list *temp = curr;
        curr = curr->next;
        free(temp);
    }

    return 0;
}
*/