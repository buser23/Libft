/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <bsalgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:14:37 by bsalgado          #+#    #+#             */
/*   Updated: 2023/04/28 16:51:59 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	The function ft_strchr is typically used to find the first 
	occurrence of a character c in a null-terminated string s. 
	It takes two arguments:

    	s: A pointer to the string in which to search for the character.
    	c: An integer that represents the character to search for.

	The function returns a pointer to the first occurrence of the 
	character c in the string s, or NULL if the character is not found.

*/

char	*ft_strchr(const char *s, int c)
{
	char	*a;

	a = (char *)s;
	while (*a != '\0')
	{
		if (*a == (char) c)
			return (a);
		a++;
	}
	if (*a == (char) c)
		return (a);
	return (NULL);
}

/*
int main(void) 
{
    char str[] = "Bruno";
    char *ptr = ft_strchr(str, 'r');
    if (ptr != NULL) 
	{
        printf("Found character 'r' at position %ld\n", ptr - str);
    } 
	else 
	{
        printf("Character not found\n");
    }
    return 0;
}
*/