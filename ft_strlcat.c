/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <bsalgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:38:59 by bsalgado          #+#    #+#             */
/*   Updated: 2023/04/28 15:49:51 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

The ft_strlcat() function is used to concatenate a null-terminated 
string from a source string to a destination string, while ensuring 
that the destination string does not overflow.

The function takes three arguments:

    dest: a pointer to the destination string where the 
		  concatenated string will be stored.
    src: a const pointer to the source string to be concatenated.
    size: a size_t value representing the maximum number of 
	      bytes that can be stored in the destination string, 
		  including the null terminator.

The function returns a size_t value representing the total 
length of the concatenated string, i.e., the sum of the length 
of the source string and the original length of the destination string.


*/

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;
	size_t	sum;

	i = 0;
	sum = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size > dest_len)
		sum = dest_len + src_len;
	else
		return (src_len + size);
	while (src[i] != '\0' && (dest_len + 1) < size)
		dest[dest_len++] = src[i++];
	dest[dest_len] = '\0';
	return (sum);
}

/*
int	main(void)
{
    char dest[20] = "Bruno ";
    char src[] = "Fernandes";
    size_t total_length;

    total_length = ft_strlcat(dest, src, 16);

    printf("Concatenated string: %s\n", dest);
    printf("Total length: %lu\n", total_length);

    return 0;
}
*/
