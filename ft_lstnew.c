/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <bsalgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 16:41:30 by bsalgado          #+#    #+#             */
/*   Updated: 2023/05/17 18:43:53 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	The ft_lstnew function creates a new linked list node with the given 
	content and returns a pointer to the node.

	The function takes a void pointer content as input, which is the content 
	that will be stored in the new node.

	The function first allocates memory for the new node using malloc, and 
	checks if the allocation was successful. If the allocation was not successful, 
	the function returns NULL.

	If the allocation was successful, the function initializes the new node's 
	content pointer to the given content, and sets its next pointer to NULL.

	Finally, the function returns a pointer to the newly created node.

	In this example, the main function creates a new integer pointer data 
	using malloc, and sets its value to 42. The ft_lstnew function is then 
	called with data as its argument, and the resulting node 
	pointer is assigned to new_node.

	The main function then checks if new_node is not NULL, and prints 
	out the integer value of new_node->content.

	Finally, the data and new_node pointers are freed to 
	prevent memory leaks.

	The function ft_lstnew creates a new node for a linked list with the 
	given content. Here's a breakdown of how the function works:

    	1 - The function takes a parameter content, which represents 
		the content to be stored in the new node.

    	2 - It declares a pointer variable new_node of type t_list, 
		which represents the new node in the linked list.

    	3 - It allocates memory for the new node using malloc, 
		with the size of sizeof(t_list). This allocates memory 
		to store the node structure.

    	4 - It checks if the memory allocation was successful. 
		If the allocation fails, the function returns NULL 
		to indicate an error.

    	5 - If the memory allocation is successful, it assigns the 
		content parameter to the content field of the new node.

    	6 - It sets the next field of the new node to NULL, 
		indicating that it is the last node in the linked list.

    	7 Finally, it returns the pointer to the new node.

	In summary, the ft_lstnew function creates a new node for a 
	linked list, assigns the given content to the node, and returns 
	a pointer to the new node. It handles the memory allocation for 
	the node and initializes its fields appropriately.
	
*/

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

/*
int	main(void)
{
	t_list	*new_node;
	int		*data;

	data = (int *)malloc(sizeof(int));
	if (!data)
		return (1);
	*data = 42;
	new_node = ft_lstnew(data);
	if (!new_node)
	{
		free(data);
		return (1);
	}
	printf("New node created with content: %d\n", *((int *)new_node->content));
	free(data);
	free(new_node);
	return (0);
}
*/