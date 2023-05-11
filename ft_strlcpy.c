/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunofernandes <brunofernandes@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:20:58 by bsalgado          #+#    #+#             */
/*   Updated: 2023/05/12 00:14:09 by brunofernan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	Copy a null-terminated string from a source string to a 
	destination string, while ensuring that the destination 
	string does not overflow.

	The function takes three arguments:

    - dest: a pointer to the destination string where the copied 
		  string will be stored.
    - src:  a const pointer to the source string to be copied.
    - size: a size_t value representing the maximum number of bytes to be 
		 copied, including the null terminator.

	First initializes the variable i to 0, which will be used as an 
	index to iterate through the characters of the src string.

	After, the block of code checks if size is greater than 0, 
	indicating that there is space available in the destination 
	buffer (dest) to perform the copying. If so, it enters the loop.

	The loop condition src[i] != '\0' checks if the current character 
	being copied from src is not the null terminator, and i < size - 1 
	ensures that copying continues until there is enough space for the 
	null terminator in the dest buffer.

	Inside the loop, each character from src is copied to the corresponding 
	position in dest, and i is incremented. After the loop completes, 
	the null terminator is added at the end of the copied string in dest.

	Finally, the function returns the length of the source string src 
	using the ft_strlen function. This is done to provide consistency 
	with the behavior of the standard strlcpy function, which returns 
	the length of the source string that would have been copied if 
	there was sufficient space in the destination buffer.



*/

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}

/*
int main(void) 
{
    char src[] = "Bruno";
    char dest[6];
    size_t len;

    len = ft_strlcpy(dest, src, sizeof(dest));

    printf("Source string: %s\n", src);
    printf("Destination string: %s\n", dest);
    printf("Length of source string: %zu\n", len);

    return 0;
}
*/