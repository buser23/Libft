/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <bsalgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 12:22:35 by bsalgado          #+#    #+#             */
/*   Updated: 2023/04/28 12:47:35 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	The  memcpy() function copies n bytes from memory area src to memory area dst.
	The memory areas must not overlap.  Use memmove(3) if the memory areas do over‐
	lap.

	(unsigned char *) to avoid const declaration
	unsigned char *memory_src; redeclare memory to get memory value

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