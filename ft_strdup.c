/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <bsalgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 18:29:01 by bsalgado          #+#    #+#             */
/*   Updated: 2023/04/28 18:44:30 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

The ft_strdup() function is a string manipulation function in C that 
duplicates a string. It takes a const char *s parameter, which is a pointer 
to the original string that we want to duplicate, and returns a pointer 
to a new string that is a copy of the original.

*/

char	*ft_strdup(const char *str)
{
	char	*p;
	size_t	len;
	size_t	i;

	len = ft_strlen(str);
	p = (char *) malloc(len * sizeof(char) + 1);
	if (!p)
		return (NULL);
	i = 0;
	while (i < len)
	{
		p[i] = str[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

/*
int	main(void)
{
	char	str[] = "Hello";
	char	*d = ft_strdup(str);
	printf("Source: %s | Dest: %s | LastChar: '%c'\n", str, d, d[5]);
	free(d);

	return (0);
}
*/