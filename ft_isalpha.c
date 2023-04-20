/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <bsalgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 12:29:21 by bsalgado          #+#    #+#             */
/*   Updated: 2023/04/20 18:20:41 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/*
int	main(void)
{
	char	name;

	name = 'b';
	
	printf("\n\t>>> USING ft_isalpha() <<<\n\n");
	printf("Sending \'%c\' : %d\n", name, ft_isalpha(name));

	if (ft_isalpha(name))
		printf("The char \'%c\' is alphabetic.\n", name);
	else
		printf("The char \'%c\' is not alphabetic.\n", name);
}
*/