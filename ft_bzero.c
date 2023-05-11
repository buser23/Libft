/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunofernandes <brunofernandes@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:31:59 by bsalgado          #+#    #+#             */
/*   Updated: 2023/05/11 23:57:56 by brunofernan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	  The  bzero()  function  erases  the  data  in the n bytes of the memory
    starting at the location pointed to by s, by writing zeros (bytes
		containing '\0') to that area.

		This function takes two arguments:

			- s: A pointer to the memory block to be zeroed out.
			- n: The number of bytes to be set to zero starting from the 
			memory block pointed to by s.

		The function sets the first n bytes of the memory block pointed to 
		by s to the value 0 (i.e., the null byte).

		By convention, the ft_bzero function does not return a value; its 
		purpose is solely to modify the contents of the memory block pointed to by s. 
		The function is typically used to clear sensitive information 
		(such as passwords) from memory after they are no longer needed.

		In summary, the ft_bzero function is a convenient way to set a 
		block of memory to all zeros. It takes a pointer to the memory 
		block and the size of the block as arguments and modifies the 
		contents of the block to all zeros.

*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

/*
int	main(void)
{
	char str[] = "Bruno";

	printf("\n\t>>> USING ft_bzero() <<<\n\n");
	printf("String Before: %s\n", str);
	ft_bzero(str, 5);
    printf("String After: %s\n", str);
	return (0);
}
*/