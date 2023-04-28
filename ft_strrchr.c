/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <bsalgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:24:55 by bsalgado          #+#    #+#             */
/*   Updated: 2023/04/28 16:52:08 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	The function ft_strrchr is similar to ft_strchr, but it searches 
	for the last occurrence of the character c in the null-terminated string s. 
	It takes two arguments:

    	s: A pointer to the string in which to search for the character.
    	c: An integer that represents the character to search for.

	The function returns a pointer to the last occurrence of the 
	character c in the string s, or NULL if the character is not found.

*/

char	*ft_strrchr(const char *s, int c)
{
	char	*a;

	a = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			a = (char *)s;
		s++;
	}
	if (*s == (char)c)
		a = (char *)s;
	return (a);
}

/*
int main(void) 
{
    char str[] = "Bruno";
    char *ptr = ft_strrchr(str, 'r');
	long pos = (str + strlen(str) - ptr) - 1;
    if (ptr != NULL) 
	{
        printf("Found 'r' at position %ld from the end\n", pos);
    } 
	else 
	{
        printf("Character not found\n");
    }
    return 0;
}
*/