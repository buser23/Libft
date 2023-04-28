/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <bsalgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:56:44 by bsalgado          #+#    #+#             */
/*   Updated: 2023/04/28 17:03:05 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	The ft_memchr function searches the first n bytes of the memory block 
	pointed to by s for the first occurrence of the character c. 
	It takes three arguments:

    	s: A pointer to the memory block to search.
    	c: The character to search for.
    	n: The maximum number of bytes to search.

	The function returns a pointer to the byte that matches c, 
	or NULL if c is not found in the first n bytes of the memory block.

*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;

	str = s;
	while (n > 0)
	{
		if (*str == (unsigned char)c)
			return ((void *)str);
		str++;
		n--;
	}
	return (NULL);
}

/*
int main(void) 
{
    char str[] = "Bruno";
    char *result = ft_memchr(str, 'r', 12);
    if (result != NULL) 
	{
        printf("Found 'r' at address %p\n", result);
    } 
	else 
	{
        printf("Did not find 'r'\n");
    }
    return 0;
}
*/