/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunofernandes <brunofernandes@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:29:05 by bsalgado          #+#    #+#             */
/*   Updated: 2023/05/20 18:16:35 by brunofernan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	1 - The function ft_strlen takes a pointer s to the input string 
	as an argument.

  2 - It declares a local variable i of type size_t to keep track 
	of the length of the string.

  3 - The code enters a while loop that continues until it encounters 
	the null terminator ('\0') character, indicating the end of the string.

  4 - Inside the loop, it increments the value of i by 1, effectively 
	counting the number of characters in the string.

  5 - After the loop completes, the function returns the value of i, 
	which represents the length of the string.

*/

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/*
int	main(void)
{
	char *str = "Bruno";

	printf("\n\t>>> USING ft_strlen() <<<\n\n");
	
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	printf("The Length of \'%s\' = %ld\n", str, ft_strlen(str));
	return (0);
}
*/