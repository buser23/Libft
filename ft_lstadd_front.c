/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <bsalgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 16:54:41 by bsalgado          #+#    #+#             */
/*   Updated: 2023/05/17 18:47:09 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	The ft_lstadd_front function adds the given element new to the beginning 
	of the linked list pointed to by lst.

	First, it checks if the new element new is not NULL. If it is NULL, 
	the function returns immediately.
    The next pointer of the new element new is set to point to the current 
	first element of the list, which is stored in the pointer pointed to by lst.
    Finally, the pointer pointed to by lst is updated to point to the new 
	element new, which becomes the new first element of the list.

	In this example, we first declare a pointer to a t_list node called 
	lst and initialize it to NULL. We then create a new node with the content 
	"Hello" using the ft_lstnew function, and store the returned pointer in a 
	variable called new_node.

	Finally, we call ft_lstadd_front to add the new node to the front of the 
	linked list pointed to by lst. This is done by passing the address of 
	lst as the first argument (i.e. &lst), and the new_node 
	pointer as the second argument.

	We then print the contents of the first node in the linked list 
	using printf, and the output should be "First node content: Hello".

	This function adds a new node to the front of a linked list.

	    1 - The function ft_lstadd_front takes two parameters: **lst, a 
		double pointer to the head of the list, and *new, a pointer to 
		the new node being added.

    	2 - The function checks if both lst and new are not NULL. 
		This check ensures that valid pointers are provided for the 
		list and the new node.

    	3 - If the check passes, the next pointer of the new 
		node is assigned the value of the current head of the 
		list (*lst). This step links the new node to the rest 
		of the list.

    	4 - Finally, the head of the list (*lst) is updated to 
		point to the new node. This step makes the new node 
		the new head of the list, effectively adding it to the front.

	Note that this implementation assumes the existence of a t_list 
	structure that represents a node in the linked list. The t_list 
	structure typically contains a data field and a pointer to the 
	next node in the list.
	
	By using this ft_lstadd_front function, you can add a new node 
	to the beginning of a linked list.
	
*/

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst != NULL && new != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
}

/*
int	main(void)
{
	t_list *lst = NULL;
    t_list *new_node;

    // Create a new node with content "Hello"
    new_node = ft_lstnew("Hello");

    // Add the new node to the front of the linked list
    ft_lstadd_front(&lst, new_node);

    // Print the contents of the first node in the linked list
    printf("First node content: %s\n", (char*)lst->content);

    return 0;
}
*/