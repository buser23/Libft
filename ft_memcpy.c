/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <bsalgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 12:22:35 by bsalgado          #+#    #+#             */
/*   Updated: 2023/05/17 13:19:01 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	The  memcpy() function copies n bytes from memory area src to memory area dst.
	The memory areas must not overlap.  

	(unsigned char *): 				 to avoid const declaration
	unsigned char *memory_src: redeclare memory to get memory value

	It takes three arguments:

		- dest: A pointer to the destination memory block where the contents 
		of the source memory block will be copied.
		- src: A pointer to the source memory block containing the data to be 
		copied to the destination memory block.
		- n: The number of bytes to be copied from the source memory block to 
		the destination memory block.

	The function copies n bytes from the memory block pointed to by src to the 
	memory block pointed to by dest. The function assumes that the memory 
	blocks do not overlap, meaning that dest and src should not point to 
	overlapping memory blocks. If the memory blocks do overlap, the behavior 
	of ft_memcpy is undefined.

	The function returns a pointer to the destination memory block (dest). 
	This makes it convenient to chain calls to ft_memcpy to copy data to 
	multiple destination memory blocks.

	In summary, the ft_memcpy function is a standard library function in C 
	that is used to copy a specified number of bytes from one memory 
	block to another. The function takes a pointer to the source 
	memory block, a pointer to the destination memory block, 
	and the number of bytes to be copied as arguments, 
	and returns a pointer to the destination memory block.

	1 - The function ft_memcpy takes three arguments: a pointer dest 
	to the destination memory block, a pointer src to the source 
	memory block, and a size_t n indicating the number of bytes to be copied.

    2 - It declares two local variables memory_src and memory_dest as 
	unsigned char pointers and initializes them with the values of src 
	and dest respectively. These pointers will be used to iterate over 
	the source and destination memory blocks.

    3 - It checks if both src and dest are NULL. If they are both NULL, 
	it returns the dest pointer. This check is performed to handle 
	cases where the caller passes NULL pointers.

    4 - The code enters a while loop that continues until n bytes 
	have been copied. The loop iterates i from 0 to n-1.

    5 - Inside the loop, each byte from the source memory block, 
	memory_src[i], is assigned to the corresponding byte in the 
	destination memory block, memory_dest[i].

    6 - After the loop completes, the dest pointer is returned.

*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*memory_src;
	unsigned char	*memory_dest;
	unsigned int	i;

	if (src == NULL && dest == NULL)
		return (dest);
	memory_src = (unsigned char *)src;
	memory_dest = (unsigned char *)dest;
	i = 0;
	while (n > i)
	{
		memory_dest[i] = memory_src[i];
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	char src[] = "Bruno";
    char dest[20];
    size_t n = strlen(src) + 1; // +1 to include the null terminator

    ft_memcpy(dest, src, n);

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return 0;
}
*/