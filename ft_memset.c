/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <bsalgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:57:44 by bsalgado          #+#    #+#             */
/*   Updated: 2023/04/28 12:43:48 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	The  ft_memset() function fills the first n bytes of the 
	memory area pointed to by s with the constant byte c.
	We use this function before a operation, is like a memory "reset"

	variable "memory" receives the pointer and allow changes on it to move on
*/

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n-- > 0)
		*p++ = (unsigned char) c;
	return (s);
}

/*
int	main(void)
{
	char str[] = "Bruno";

	printf("\n\t>>> USING ft_memset() <<<\n\n");
	printf("String Before: %s\n", str);
	ft_memset(str, '@', 5);
    printf("String After: %s\n", str);
	return (0);
}
*/