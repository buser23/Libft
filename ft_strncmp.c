/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <bsalgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:44:53 by bsalgado          #+#    #+#             */
/*   Updated: 2023/04/28 16:56:09 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	The function ft_strncmp compares up to n characters of the 
	null-terminated strings s1 and s2, and returns an integer 
	that indicates the result of the comparison. 
	It takes three arguments:

    	s1: A pointer to the first string to compare.
    	s2: A pointer to the second string to compare.
    	n: The maximum number of characters to compare.

	The function returns an integer that indicates the result 
	of the comparison. The possible return values are:

    	0:   The first n characters of s1 and s2 are equal.
    	< 0: The first character that differs between 
		     s1 and s2 has a lower value in s1 than in s2, 
			 or all n characters of s1 and s2 are equal 
			 but the length of s1 is less than the length of s2.
    	> 0: The first character that differs between 
		     s1 and s2 has a greater value in s1 than in s2, 
			 or all n characters of s1 and s2 are equal but 
			 the length of s1 is greater than the length of s2.

*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
int main(void) 
{
    char str1[] = "Bruno";
    char str2[] = "Bruno Fernandes";
    int result = ft_strncmp(str1, str2, 5);
    if (result == 0) 
	{
        printf("The first 5 characters of the strings are equal\n");
    } 
	else if (result < 0) 
	{
        printf("The first 5 ch of str1 are less than the ch of str2\n");
    } 
	else 
	{
        printf("The first 5 ch of str1 are greater than the ch of str2\n");
    }
    return 0;
}
*/