/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <bsalgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:57:50 by bsalgado          #+#    #+#             */
/*   Updated: 2023/05/09 16:16:17 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	The ft_putendl_fd function is a part of the C standard library's stdio.h 
	header file. It is used to write a string to a specified file descriptor 
	(i.e., a file or a device).

	This function takes two arguments:

    	- s - a pointer to the string that you want to write to 
		the file descriptor.
    	- fd - an integer representing the file descriptor to 
		which you want to write the string.

	The function works by first writing the string to the specified file 
	descriptor using write(), which is a system call that writes a specified 
	number of bytes to a file descriptor.

	After the string is written, the function writes a newline character 
	('\n') to the same file descriptor, using write() again. This ensures 
	that the next piece of text written to the file will appear on a new line.

	These lines of code first calculate the length of the input string s using 
	the ft_strlen() function and store it in the len variable.

	Then, the write() function is used to write the entire string s to the file 
	descriptor fd, which is passed as the second argument. The len parameter is 
	used to specify the number of bytes to write, which is the length of the string.

	Finally, the write() function is used again to write a newline character 
	('\n') to the same file descriptor, using a string literal "\n" as the 
	buffer and the value 1 as the number of bytes to write. This ensures 
	that the next piece of text written to the file will appear on a new line.

	This program opens a file called output.txt for writing, using the open() 
	system call with the O_WRONLY and O_CREAT flags to create the file if it 
	doesn't exist. The file permissions are set to 0644, which allows the owner 
	to read and write the file, and everyone else to only read it.
	Then, the ft_putendl_fd() function is called with the string "Hello, world!" 
	and the file descriptor fd as arguments, which writes the string to the file 
	followed by a newline character.Finally, the file is closed using 
	the close() system call, and the program exits.
	
*/

void	ft_putendl_fd(char *s, int fd)
{
	size_t	len;

	len = ft_strlen(s);
	write(fd, s, len);
	write(fd, "\n", 1);
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
	ft_putendl_fd("Hello, world!", fd);
	close(fd);
	return (0);
}
*/