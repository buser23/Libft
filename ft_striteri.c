/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <bsalgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:09:06 by bsalgado          #+#    #+#             */
/*   Updated: 2023/05/17 18:31:30 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	The ft_striteri function takes a pointer to a string s and a function 
	pointer f as arguments. The function f takes an unsigned integer index 
	and a pointer to a character c as arguments and returns no value.

	The purpose of ft_striteri is to apply the function f to each character 
	in the string s, with the character's index as the first argument to f. 
	This function modifies the characters in place and does not 
	return anything.

	This implementation of the ft_striteri function, applies a 
	function f to each character of the string s, with the character's 
	index as the first argument to f. The implementation includes 
	a check to ensure that both s and f are not NULL, 
	and then iterates over each character in the string, calling the 
	function f for each one.

	Here's a breakdown of how the function works:

    	- unsigned int i;: declare a variable i to keep track of the current 
		index in the string.
    	- i = 0;: initialize i to 0.
 		- if (!s || !f) return;: check if either s or f is NULL. If either 
		is NULL, return immediately.
    	- while (s[i]): loop over each character in the string, stopping 
		when the null terminator is reached.
    	- f(i, &s[i]);: call the function f with the current index i and a 
		pointer to the current character s[i].
    	- i++;: increment the index i to move to the next character 
		in the string.

	Note that the & operator is used to pass a pointer to the current 
	character to f, since f expects a pointer to a character 
	as its second argument.

	The function ft_striteri takes a string s and a function 
	pointer f as input. It applies the function f to each 
	character of the string, providing the index and a pointer 
	to the character as arguments. The function does not return 
	any value. Here's a breakdown of how the function works:

    1 - Declare an unsigned int variable i and initialize it to 0. 
	This variable will be used as a loop counter and index.

    2 - Check if either the string s or the function pointer f 
	is null. If either condition is true, return without 
	performing any operations.

    3 - Start a loop that continues while the character at s[i] 
	is not the null character '\0', indicating the end of the string.

    4 - Inside the loop, call the function f with the arguments i 
	and the address of s[i]. This passes the current index and a 
	pointer to the current character in the string to the function.

    5 - Increment i to move to the next character in the string.

    6 - Repeat steps 3-5 until the end of the string is reached.

	The function ft_striteri allows you to apply a function 
	to each character of a string, providing the index and a 
	pointer to the character to the function. It can be used, 
	for example, to modify each character in a string or 
	perform some other operation on each character.

*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*
void	add_index(unsigned int i, char *c)
{
    *c += i;
}
*/

/*
int	main(void)
{
	char s[] = "hello world";

    printf("Before ft_striteri: %s\n", s);
    ft_striteri(s, &add_index);
    printf("After ft_striteri: %s\n", s);

    return 0;
}
*/