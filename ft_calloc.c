/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <bsalgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 18:10:27 by bsalgado          #+#    #+#             */
/*   Updated: 2023/04/28 18:26:51 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	The ft_calloc function in C dynamically allocates a block of memory 
	for an array of nmemb elements, each of size bytes, and initializes 
	all the bytes in the allocated memory to zero.

	where nmemb is the number of elements to allocate and size is the 
	size in bytes of each element.
	The function returns a pointer to the allocated memory, 
	or NULL if the allocation fails.

	- Allocate memory for nmemb elements of size bytes each 
	p = malloc(nmemb * size);
	- Initialize all bytes of the allocated memory to 0
	ft_bzero (p, nmemb * size);
	

*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	ft_bzero (p, nmemb * size);
	return (p);
}

/*
int main(void) 
{
    int *arr;
    int n = 5;
	int i = 0;
    
    arr = (int*)ft_calloc(n, sizeof(int));
    if (arr == NULL) {
        printf("Error: memory allocation failed\n");
        return 1;
    }
    
    while (i < n) {
        printf("%d ", arr[i]); // should print 0 0 0 0 0
        i++;
    }
    
    free(arr);
    return 0;
}
*/