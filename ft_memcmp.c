/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <bsalgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:46:54 by bsalgado          #+#    #+#             */
/*   Updated: 2023/04/28 18:04:10 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	ft_memcmp is a function in C that compares the first n bytes 
	of two memory areas pointed to by s1 and s2. 
	The s1 and s2 arguments are pointers to the memory areas to be compared, 
	and n specifies the number of bytes to compare.

	The function returns an integer value that indicates the relationship 
	between the two memory areas. If the first n bytes of the two memory 
	areas are equal, the function returns 0. If the first differing byte 
	in s1 is greater than the corresponding byte in s2, the function returns 
	a value greater than 0. If the first differing byte in s1 is less 
	than the corresponding byte in s2, the function returns a value less than 0.

*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = s1;
	p2 = s2;
	while (n--)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);
}

/*
int main(void) 
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 5, 4};
    int result;

    result = ft_memcmp(arr1, arr2, 20);

    if (result == 0) 
	{
        printf("Arrays arr1 and arr2 are equal\n");
    } 
	else 
	{
        printf("Arrays arr1 and arr2 are not equal\n");
    }
    return 0;
}
*/
