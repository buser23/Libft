/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <bsalgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 16:54:41 by bsalgado          #+#    #+#             */
/*   Updated: 2023/05/09 17:06:31 by bsalgado         ###   ########.fr       */
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