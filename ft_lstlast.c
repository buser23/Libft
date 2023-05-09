/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <bsalgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:18:00 by bsalgado          #+#    #+#             */
/*   Updated: 2023/05/09 17:28:58 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	The ft_lstlast function is likely another function in a linked list 
	implementation in C. The purpose of ft_lstlast is to find the last 
	node in the linked list that lst points to and return a pointer to it.

	In this implementation, the function takes a pointer to the head of 
	the linked list (lst). If the list is empty (i.e., lst is NULL), 
	the function returns NULL. Otherwise, it iterates through the 
	list using a while loop until it reaches the last node, which is 
	indicated by a NULL next pointer. Finally, it returns a 
	pointer to the last node.

	Note that if you pass a NULL pointer to ft_lstlast, it will return NULL.

	In this main function, we create a linked list with 3 nodes, 
	where each node's content field is a pointer to a string. 
	Then we use the ft_lstlast function to find the last element 
	of the linked list, and print the content of the 
	last element to the console.

*/

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
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

    // Get the last element of the linked list
    t_list *last = ft_lstlast(head);

    // Print the last element's content
    printf("Last element's content: %s\n", (char *) last->content);

    // Free the memory used by the linked list
    free(head->next->next);
    free(head->next);
    free(head);

    return 0;
}
*/