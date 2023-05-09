/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <bsalgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 16:16:49 by bsalgado          #+#    #+#             */
/*   Updated: 2023/05/09 16:31:07 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	The ft_putnbr_fd() function takes an integer n and a file descriptor fd as 
	input and writes the integer to the specified file descriptor. 

	This is the implementation of a recursive function ft_putnbr_fd that 
	takes an integer n and an integer file descriptor fd as arguments and 
	prints the integer n to the specified file descriptor.

	The function first creates a long integer nb initialized with the value of n. 
	If the input integer n is negative, the function prints a "-" sign to indicate 
	that the number is negative and sets nb to its absolute value.

	The function then recursively prints the digits of the number by dividing nb 
	by 10 and printing the remainder (i.e. the last digit) using the ft_putchar_fd 
	function. The recursion stops when nb is less than or equal to 9.

	The printing of the digits is done in reverse order, since the function 
	recursively calls itself with the quotient nb / 10 before 
	printing the remainder.

	Finally, the function prints the last digit of nb by adding the ASCII code 
	for '0' to the remainder and passing it to ft_putchar_fd. This converts 
	the integer digit to its corresponding character representation.
	
*/

void	ft_putnbr_fd(int n, int fd)
{
	long int	nb;

	nb = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr_fd(nb / 10, fd);
	ft_putchar_fd(nb % 10 + '0', fd);
}

/*
int	main(void)
{
	int fd;
	
	fd = open("output.txt", O_WRONLY | O_CREAT, 0644);
	if (fd < 0)
	{
		write(STDERR_FILENO, "Error: failed to open file\n", 27);
		return (1);
	}
	ft_putnbr_fd(-12345, fd);
	write(fd, "\n", 1);
	close(fd);
	return (0);
}
*/