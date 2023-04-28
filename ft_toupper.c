/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <bsalgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:53:48 by bsalgado          #+#    #+#             */
/*   Updated: 2023/04/28 15:59:54 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

The ft_toupper() function is a standard library function in C that converts 
a given lowercase character to its corresponding uppercase character, 
if it exists. 

*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

/*
int	main(void)
{
    char c = 'b';
    char c_converted = ft_toupper(c);

    printf("Original character: %c\n", c);
    printf("Uppercase character: %c\n", c_converted);

    return 0;
}
*/