/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <bsalgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:19:17 by bsalgado          #+#    #+#             */
/*   Updated: 2023/05/09 14:45:26 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	It is a C function that takes an integer n as input and returns a 
	pointer to a string representation of that integer. The string is dynamically 
	allocated and must be freed by the caller.

	This implementation uses a helper function ft_intlen to calculate the 
	length of the integer, and handles negative integers differently.

    	- ft_intlen is a helper function that takes an integer n and returns 
		the number of digits in n. It works by initializing len to 1 if n is 0, 
		and then repeatedly dividing n by 10 and incrementing len until n is 0.
    	- ft_itoa takes an integer n as input and returns a pointer to a string 
		representation of n. It first checks if n is negative and sets a sign variable 
		accordingly. It then calculates the length of the string by calling ft_intlen 
		and adding 1 if n is negative. It allocates memory for the string using 
		malloc and checks if the allocation was successful. If not, it returns NULL.
    	- If n is negative, it sets the first character of the string to '-' 
		and sets the last character of the string to the ones digit of n (which is 
		negative because n is negative), and updates n to be the remaining digits of 
		the number. This is done because -(n % 10) gives the ones digit of n 
		as a positive number.
    	- Finally, it fills in the rest of the string by starting at the 
		second-last character (if n is negative) or the last character 
		(if n is positive) and repeatedly setting it to the last digit of 
		n plus '0' (to convert it to a character digit), and then dividing 
		n by 10 to move to the next digit.

	The function then returns the pointer to the string. Note that the 
	string is dynamically allocated and must be freed by the caller.

*/

static int	ft_intlen(int n)
{
	int	len;

	len = !n;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*c;
	bool	sign;
	int		len;

	sign = n < 0;
	len = ft_intlen(n) + sign;
	c = (char *)malloc(sizeof(char) * (len + 1));
	if (!c)
		return (NULL);
	c[len] = '\0';
	if (sign)
	{
		*c = '-';
		c[--len] = -(n % 10) + '0';
		n = -(n / 10);
	}
	while (len-- - sign)
	{
		c[len] = n % 10 + '0';
		n = n / 10;
	}
	return (c);
}

/*
int	main(void)
{
	int	num = -12345;
    char *str = ft_itoa(num);
    if (str != NULL) 
	{
        printf("%d -> %s\n", num, str);
        free(str);
    }
    return 0;
}
*/