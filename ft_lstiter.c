/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunofernandes <brunofernandes@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 00:54:11 by brunofernan       #+#    #+#             */
/*   Updated: 2023/05/11 01:09:31 by brunofernan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	The function ft_lstiter takes in two parameters: a pointer to the first 
	element of a linked list, lst, and a pointer to a function, f, that takes 
	in a void pointer as its parameter and returns void.

	The purpose of ft_lstiter is to apply the function f to every element in 
	the linked list. This is achieved by iterating through the linked list 
	using a while loop and applying f to the data element of each node.

	The function takes two arguments: a pointer to the head of a linked list, 
	lst, and a function pointer f that takes a void pointer as its argument 
	and returns void.

	The purpose of ft_lstiter is to apply the function f to the content 
	of each node in the linked list. This is achieved by iterating 
	through the list using a while loop and applying f to the content 
	element of each node.

	The code first checks that both lst and f are not NULL before 
	proceeding with the iteration. Then, the while loop iterates through
	the linked list as long as lst is not NULL. Inside the loop, the function 
	f is called with the content element of the current node, lst->content. 
	Finally, lst = lst->next updates the lst pointer to point to the 
	next node in the list.

	Overall, this implementation is similar to the one I provided earlier, 
	but it uses lst->content instead of lst->data. The specific 
	implementation details may differ based on the definition of 
	the t_list struct and the requirements of the program.  

*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst != NULL && f != NULL)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}

/*
void	print_content(void *content)
{
    printf("%s\n", (char *)content);
}
*/

/*
int	main(void)
{
	// Create a linked list with 3 elements
    t_list *lst = malloc(sizeof(t_list));
    lst->content = "Hello";
    lst->next = malloc(sizeof(t_list));
    lst->next->content = "world";
    lst->next->next = malloc(sizeof(t_list));
    lst->next->next->content = "!";
    lst->next->next->next = NULL;

    // Apply print_content to each element in the list
    ft_lstiter(lst, &print_content);

    // Free the memory allocated for the linked list
    t_list *curr = lst;
    while (curr)
    {
        t_list *temp = curr;
        curr = curr->next;
        free(temp);
    }

    return 0;
}
*/