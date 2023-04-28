/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <bsalgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:06:02 by bsalgado          #+#    #+#             */
/*   Updated: 2023/04/28 16:14:09 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

The ft_tolower function is a standard library function in C 
that converts a given uppercase character to its 
corresponding lowercase character.

*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

/*
int	main(void)
{
    char c = 'B';
    char c_converted = ft_tolower(c);

    printf("Original character: %c\n", c);
    printf("Lowercase character: %c\n", c_converted);

    return 0;
}
*/