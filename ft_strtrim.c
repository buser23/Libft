/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <bsalgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:56:40 by bsalgado          #+#    #+#             */
/*   Updated: 2023/05/04 16:10:28 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	Function that takes two string arguments s1 and set, and returns a new 
	string that is a copy of s1 with any leading or trailing characters from 
	set removed.

*/

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*c;

	end = ft_strlen(s1) - 1;
	start = 0;
	while (start <= end && ft_strchr(set, s1[start]))
		start++;
	if (start > end)
		return (ft_strdup(&s1[end + 1]));
	while (end >= 0 && ft_strchr(set, s1[end]))
		end--;
	c = (char *) malloc(sizeof(char) * (end - start + 1) + 1);
	if (!c)
		return (NULL);
	ft_strlcpy(c, &s1[start], (end - start + 1) + 1);
	return (c);
}

/*
int	main(void)
{
	char *str = "   hello world   ";
    char *trimmed_str = ft_strtrim(str, " ");
    
    printf("Original string: \"%s\"\n", str);
    printf("Trimmed string: \"%s\"\n", trimmed_str);
    
    free(trimmed_str);
    return 0;
}
*/
