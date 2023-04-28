/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <bsalgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:11:09 by bsalgado          #+#    #+#             */
/*   Updated: 2023/04/28 17:19:56 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	The ft_strnstr function searches for the first occurrence of the string 
	little in the string big, up to a maximum of len characters. 
	It takes three arguments:

    	big: A pointer to the string to search.
    	little: A pointer to the string to search for.
    	len: The maximum number of characters to search.

	The function returns a pointer to the first occurrence of the string 
	little in the string big, or NULL if little 
	is not found in the first len characters of big.

*/

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && big[i + j] != '\0' && i + j < len)
		{
			if (!little[j + 1])
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

/*
int main(void) 
{
    char str[] = "42 school is the best programming school in world";
    char *result = ft_strnstr(str, "best", 30);
    if (result != NULL) 
	{
        printf("Substring found: %s\n", result);
    } 
	else 
	{
        printf("Substring not found\n");
    }
    return 0;
}
*/