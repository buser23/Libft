/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <bsalgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:39:13 by bsalgado          #+#    #+#             */
/*   Updated: 2023/05/04 15:56:08 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	This function concatenates two input strings s1 and s2 into a newly 
	allocated string. The function returns a pointer to the concatenated string, 
	or NULL if the allocation fails.

*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*c;
	size_t	len;
	int		i;
	int		j;

	len = ft_strlen(s1) + ft_strlen(s2);
	c = (char *) malloc(len * sizeof(char) + 1);
	if (!c)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		c[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		c[i + j] = s2[j];
		j++;
	}
	c[i + j] = '\0';
	return (c);
}

/*
int	main(void)
{
	char *s1 = "Hello";
    char *s2 = "World";
    char *result = ft_strjoin(s1, s2);
    if (result) // if result is not NULL
    {
        printf("%s\n", result);
        free(result);
    }
    return 0;
}
*/
