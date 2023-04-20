/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <bsalgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:21:28 by bsalgado          #+#    #+#             */
/*   Updated: 2023/04/20 15:33:51 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*
int	main(void)
{
	char	name;

	name = 'b';
	
	printf("\n\t>>> USING ft_isascii() <<<\n\n");
	printf("Sending \'%c\' : %d\n", name, ft_isascii(name));

	if (ft_isascii(name))
		printf("The char \'%c\' is from ascii table.\n", name);
	else
		printf("The char \'%c\' is not from ascii table.\n", name);
}
*/