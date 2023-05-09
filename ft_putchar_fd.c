/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <bsalgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:23:48 by bsalgado          #+#    #+#             */
/*   Updated: 2023/05/09 15:31:26 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	The ft_putchar_fd function takes a character c and a file descriptor fd 
	as arguments, and writes the character to the specified file descriptor.

	The function simply calls the write system call with the file descriptor 
	and a pointer to the character to be written. The write call writes a 
	single byte to the file descriptor, which corresponds to the 
	given character.

	Note that this function assumes that the file descriptor is valid and 
	writable. It's the responsibility of the caller to ensure 
	that this is the case.
	
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
int	main(void)
{
	int fd = open("output.txt", O_WRONLY | O_CREAT, 0644);
    if (fd == -1) {
        perror("open");
        return 1;
    }

    char c = 'A';
    ft_putchar_fd(c, fd);

    close(fd);
    return 0;	
}
*/