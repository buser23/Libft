/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <bsalgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:22:54 by bsalgado          #+#    #+#             */
/*   Updated: 2023/04/20 16:26:50 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}

/*
int	main(void)
{
	char name;

	name = 'b';

	printf("\n\t>>> USING ft_isprint() <<<\n\n");
	printf("Sending \'%c\' : %d\n", name, ft_isprint(name));

	if (ft_isprint(name))
		printf("The char \'%c\' is a printable character.\n", name);
	else
		printf("The char \'%c\' is not a printable character.\n", name);
}
*/
