/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunofernandes <brunofernandes@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 12:52:01 by bsalgado          #+#    #+#             */
/*   Updated: 2023/05/12 00:09:32 by brunofernan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	The ft_memmove function in C is similar to ft_memcpy, 
	but it guarantees correct behavior even if the source 
	and destination memory areas overlap. 
	
	It takes three arguments:

		- dest: A pointer to the destination memory block where the contents 
		of the source memory block will be moved.
		- src: A pointer to the source memory block containing the data to be 
		moved to the destination memory block.
		- n: The number of bytes to be moved from the source memory block to the 
		destination memory block.

	The function moves n bytes from the memory block pointed to by src to the 
	memory block pointed to by dest. The function is similar to ft_memcpy, but 
	it handles overlapping memory blocks correctly. This means that dest and src 
	can point to overlapping memory blocks, and the function will still 
	work correctly.

	The function returns a pointer to the destination memory block (dest). 
	This makes it convenient to chain calls to ft_memmove to move data to 
	multiple destination memory blocks.

	In summary, the ft_memmove function is a standard library function in 
	C that is used to move a specified number of bytes from one memory 
	block to another. The function takes a pointer to the source memory 
	block, a pointer to the destination memory block, and the number 
	of bytes to be moved as arguments, and returns a pointer to the 
	destination memory block.

*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*pdest;
	const char	*psrc;

	if (dest == NULL && src == NULL)
		return (NULL);
	pdest = dest;
	psrc = src;
	if (pdest < psrc)
	{
		while (n--)
			*pdest++ = *psrc++;
	}
	else
	{
		pdest = pdest + n;
		psrc = psrc + n;
		while (n--)
			*(--pdest) = *(--psrc);
	}
	return (dest);
}

/*
int main(void) 
{
    char str[] = "memmove can be very useful......";
	printf("Before ft_memmove(): %s\n", str);
    ft_memmove(str + 20, str + 15, 11);
	printf("After ft_memmove(): %s\n", str);
    return 0;
}
*/