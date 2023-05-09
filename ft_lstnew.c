/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <bsalgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 16:41:30 by bsalgado          #+#    #+#             */
/*   Updated: 2023/05/09 16:52:48 by bsalgado         ###   ########.fr       */
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