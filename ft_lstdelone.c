/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <bsalgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:38:53 by bsalgado          #+#    #+#             */
/*   Updated: 2023/05/17 18:54:36 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	The ft_lstdelone function takes a linked list node lst and a 
	pointer to a function del that takes a void pointer as its parameter 
	and frees the memory pointed to by the void pointer. The function 
	should free the memory allocated for the given linked list node, 
	using the given del function to free the content of the node, 
	and set the pointer to the node to NULL.

	It checks if both the lst pointer and the del function pointer 
	are not NULL, and if they are not NULL, it calls del on the content 
	field of the lst node to free the memory allocated for the content. 
	Then it calls free on the lst pointer to free the memory allocated 
	for the node itself, and sets the lst pointer to NULL to prevent 
	any further use of the freed memory.

	In this example, the main function first creates a new linked list 
	node lst with dynamically allocated content of type int. It then 
	sets the value of the content to 42 and prints the value to the console.
	Next, the function calls ft_lstdelone on the lst node, 
	passing a function pointer to free_content as the del parameter. 
	The free_content function simply calls free on the content pointer.
	After the call to ft_lstdelone, the function prints the value of 
	the lst pointer to the console. Since the node has been deleted, 
	the value of lst should be NULL.

	The linked list is created and populated in the same way as before. 
	However, instead of using ft_lstiter to print out the contents 
	of the linked list before and after deleting the first node, the nodes 
	are deleted one at a time using ft_lstdelone.

	First, ft_lstdelone is called with the first node in the list and the 
	free function as arguments. This deletes the first node and frees the 
	memory associated with it. The list pointer is then set to the 
	next node in the list.

	Next, ft_lstdelone is called with the second node in the list and the 
	free function as arguments. This deletes the second node and frees the 
	memory associated with it. The list pointer is then set to the next 
	node in the list.

	Finally, ft_lstdelone is called with the last node in the list and the 
	free function as arguments. This deletes the last node and 
	frees the memory associated with it. The list pointer is set to NULL to 
	indicate that the list is now empty.

	This function deletes a single node from a linked list.

	    1 - The function ft_lstdelone takes two parameters: 
		lst, a pointer to the node to be deleted, and del, 
		a function pointer to the delete function.

    	2 - The function checks if both lst and del are not NULL. 
		If either of them is NULL, it means invalid arguments 
		were provided, so the function returns without 
		performing any deletion.

    	3 - If both lst and del are not NULL, the function 
		calls the delete function del and passes the content 
		of the node (lst->content) as an argument. This 
		allows the delete function to free any dynamically 
		allocated memory associated with the content.

    	4 - After freeing the content, the function calls 
		free to release the memory allocated for the node itself.

    	5 - The variable lst is set to NULL (optional step). 
		Note that modifying the local variable lst does not 
		affect the original pointer outside the function.

    	6 - Finally, the function terminates.

	By using this ft_lstdelone function, you can delete a single 
	node from a linked list by providing the node to be deleted 
	and the appropriate delete function as arguments.

*/

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst != NULL && del != NULL)
	{
		del(lst->content);
		free(lst);
		lst = NULL;
	}
}

/*
int	main(void)
{
	t_list *lst = malloc(sizeof(t_list));
    if (lst == NULL)
    {
        printf("Error: unable to allocate memory\n");
        return 1;
    }

    lst->content = malloc(sizeof(int)); 
	// replace with the actual type of content in your t_list
    if (lst->content == NULL)
    {
        printf("Error: unable to allocate memory\n");
        free(lst);
        return 1;
    }

    *(int *)(lst->content) = 42; 
	// replace with the actual value you want to store in lst->content

    void (*del)(void*) = free; 
	// replace with the actual function to free lst->content

    ft_lstdelone(lst, del);

    return 0;
}
*/