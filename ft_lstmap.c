/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunofernandes <brunofernandes@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 01:10:08 by brunofernan       #+#    #+#             */
/*   Updated: 2023/05/11 02:08:07 by brunofernan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	The ft_lstmap function takes a linked list lst and applies the function f 
	to each element of the list, creating a new list with the modified content. 
	The del function is used to free the memory of the original linked list in 
	case of an error during the execution of ft_lstmap.	

	This function takes in a pointer to a linked list (lst) and a pointer 
	to a function (f) that takes in a void pointer and returns a void pointer. 
	The function ft_lstmap creates a new linked list by applying the 
	function f to each element in the input linked list lst and storing 
	the results in the new linked list new_lst.

	The function first checks if lst or f is NULL, and if either one is NULL, 
	it returns NULL. It then initializes two pointers new_lst and new_node to NULL.

	The function then loops through each element in the input linked list lst. 
	For each element, it applies the function f to the content of the current 
	element (lst->content), creates a new node with the result using the 
	function ft_lstnew, and adds the new node to the end of the new linked 
	list new_lst using the function ft_lstadd_back. It then moves to the 
	next element in lst by setting lst to lst->next.

	If at any point a new node cannot be created (i.e., if ft_lstnew returns NULL), 
	the function frees the memory allocated for new_lst using ft_lstclear 
	(which will also free all the nodes that have been added to new_lst 
	so far using ft_lstadd_back), and returns NULL.

	Finally, if all the nodes have been successfully created and added to 
	new_lst, the function returns a pointer to the new linked list new_lst.

*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;

	if (!lst || !f)
		return (NULL);
	new_lst = NULL;
	new_node = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}

/*
void *add_one(void *num)
{
    int *result = malloc(sizeof(int));
    if (result)
        *result = (*(int*)num) + 1;
    return result;
}
*/

/*
void print_list(t_list *lst)
{
    while (lst)
    {
        printf("%d ", *(int*)lst->content);
        lst = lst->next;
    }
    printf("\n");
}
*/

/*
int	main(void)
{
	int arr[] = {1, 2, 3, 4, 5};
  int arr_size = sizeof(arr) / sizeof(int);
  t_list *lst = NULL;

  for (int i = 0; i < arr_size; i++)
      ft_lstadd_back(&lst, ft_lstnew(&arr[i]));

  printf("Original list: ");
  print_list(lst);

  t_list *new_lst = ft_lstmap(lst, add_one, free);

  printf("New list: ");
  print_list(new_lst);

  ft_lstclear(&lst, NULL);
  ft_lstclear(&new_lst, NULL);

  return 0;
}
*/