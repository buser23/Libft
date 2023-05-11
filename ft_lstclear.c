/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunofernandes <brunofernandes@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 23:46:08 by brunofernan       #+#    #+#             */
/*   Updated: 2023/05/11 00:31:35 by brunofernan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

    The function ft_lstclear is a custom implementation of the standard 
    C function void lstclear(t_list **lst, void (*del)(void*)). It is used 
    to free the memory allocated for the elements of a linked list and set 
    the list's head to NULL.

        - lst: A pointer to the first element of the linked list. 
        This parameter is a pointer to a pointer, so that the function 
        can modify the head pointer of the list.
        - del: A pointer to a function that takes a single parameter 
        of type void*, which is a pointer to the data of an element in 
        the list. This function is responsible for freeing the 
        memory allocated to the data.

        The function takes a pointer to a pointer to the first element of 
        a linked list and a function pointer that frees the content of 
        the elements in the list. It traverses the list, frees each 
        element's content, and deallocates the memory of the 
        element itself using the free() function. Finally, it sets 
        the list's head to NULL.

    Here is a breakdown of the implementation:

        - t_list *next; t_list *current;: declare two pointers 
        to t_list, next and current.

        - if (lst && del): check if both lst and del are not NULL, 
        to avoid dereferencing null pointers.

        - current = *lst;: set the current pointer to the 
        head of the list.

        - while (current): loop through the list as long as 
        the current pointer is not NULL.

        - next = current->next;: store the pointer to the next 
        element in the list in the next pointer.

        - del(current->content);: call the function pointed to 
        by del on the content of the current element.

        - free(current);: deallocate the memory used by the 
        current element.

        - current = next;: move the current pointer to the 
        next element.

        - *lst = NULL;: set the list's head to NULL, indicating 
        that the list is now empty.

*/

/*
void    del(void *content) 
{
    free(content); // Example deletion function, adjust according to your needs
}
*/

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;
	t_list	*current;

	if (lst != NULL && del != NULL)
	{
		current = *lst;
		while (current)
		{
			next = current->next;
			del(current->content);
			free(current);
			current = next;
		}
		*lst = NULL;
	}
}

/*
int	main(void)
{
	// Create a sample list
    t_list *node1 = malloc(sizeof(t_list));
    int *value1 = malloc(sizeof(int));
    *value1 = 1;
    node1->content = value1;

    t_list *node2 = malloc(sizeof(t_list));
    int *value2 = malloc(sizeof(int));
    *value2 = 2;
    node2->content = value2;

    t_list *node3 = malloc(sizeof(t_list));
    int *value3 = malloc(sizeof(int));
    *value3 = 3;
    node3->content = value3;

    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    // Call ft_lstclear
    t_list *list = node1;
    ft_lstclear(&list, del);

    // Check if the list is cleared
    if (list == NULL) {
        printf("List cleared successfully!\n");
    } else {
        printf("List not cleared properly.\n");
    }

    return 0;
}
*/