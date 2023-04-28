/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <bsalgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 12:52:01 by bsalgado          #+#    #+#             */
/*   Updated: 2023/04/28 15:20:06 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	The ft_memmove function in C is similar to ft_memcpy, 
	but it guarantees correct behavior even if the source 
	and destination memory areas overlap. 
	
	It takes three arguments:

    	dest: A pointer to the destination buffer where the content is to be copied.
    	src: A pointer to the source of data to be copied.
    	n: The number of bytes to be copied.

*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*pdest;
	const char	*psrc;

	if (!dest && !src)
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