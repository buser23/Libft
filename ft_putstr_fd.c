/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <bsalgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:46:39 by bsalgado          #+#    #+#             */
/*   Updated: 2023/05/09 15:56:50 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	The ft_putstr_fd function takes a string s and a file descriptor fd 
	as arguments, and writes the string to the specified file descriptor.

	The function checks if the input string s is NULL, and returns immediately 
	if it is. Then, it iterates over each character in the string, and writes 
	each character to the file descriptor using the write system call. 
	The write call writes a single byte to the file descriptor, which 
	corresponds to the current character pointed to by s.

	Note that this function assumes that the file descriptor is valid and 
	writable. It's the responsibility of the caller to ensure 
	that this is the case.
	
*/

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s != '\0')
	{
		write(fd, s, 1);
		s++;
	}
}

/*
int	main(void)
{
	int fd = open("output.txt", O_WRONLY | O_CREAT, 0644);
    if (fd == -1)
    {
        write(STDERR_FILENO, "Error opening file\n", 19);
        return 1;
    }
    
    char *str = "Hello, world!";
    ft_putstr_fd(str, fd);
    
    close(fd);
    
    return 0;
}
*/