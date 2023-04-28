/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <bsalgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:31:59 by bsalgado          #+#    #+#             */
/*   Updated: 2023/04/28 12:16:54 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	   The  bzero()  function  erases  the  data  in the n bytes of the memory
       starting at the location pointed to by s, by writing zeros (bytes  con‐
       taining '\0') to that area.
*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

/*
int	main(void)
{
	char str[] = "bruno";

	printf("\n\t>>> USING ft_bzero() <<<\n\n");
	printf("String Before: %s\n", str);
	ft_bzero(str, 5);
    printf("String After: %s\n", str);
	return (0);
}
*/