/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <bsalgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:07:24 by bsalgado          #+#    #+#             */
/*   Updated: 2023/05/09 17:17:35 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	The ft_lstsize function is likely part of a linked list implementation 
	in C, where t_list is a struct that represents a node in the linked list.

	The purpose of the ft_lstsize function is to count the number of nodes 
	in the linked list that lst points to, and return the count as an integer. 
	The ft_ prefix is likely used to indicate that this function is part of a 
	custom library or module, and is not a standard C library function.

	In this implementation, the function takes a pointer to the head of 
	the linked list (lst) and initializes a counter variable count to 0. 
	It then iterates through the linked list using a while loop, 
	incrementing the counter for each node encountered, until it reaches 
	the end of the list (indicated by a NULL next pointer). Finally, 
	it returns the count as an integer.

	This main function creates a linked list with 3 nodes, and then 
	calls ft_lstsize to get the size of the list. It then prints 
	the size to the console. Finally, it frees the memory used by 
	the linked list to avoid memory leaks.

	The linked list created in the main function has 3 nodes, 
	and ft_lstsize correctly counts the number of nodes in the 
	list and returns 3. The printf statement in main then 
	prints this value to the console.
	
*/

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
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

    // Get the size of the linked list
    int size = ft_lstsize(head);

    // Print the size
    printf("Size of the linked list: %d\n", size);

    // Free the memory used by the linked list
    free(head->next->next);
    free(head->next);
    free(head);

    return 0;
}
*/