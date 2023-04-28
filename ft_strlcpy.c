/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <bsalgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:20:58 by bsalgado          #+#    #+#             */
/*   Updated: 2023/04/28 15:38:36 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

Copy a null-terminated string from a source string to a 
destination string, while ensuring that the destination 
string does not overflow.

The function takes three arguments:

    dest: a pointer to the destination string where the copied 
		  string will be stored.
    src:  a const pointer to the source string to be copied.
    size: a size_t value representing the maximum number of bytes to be 
		 copied, including the null terminator.

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