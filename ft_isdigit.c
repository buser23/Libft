/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <bsalgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 18:03:40 by bsalgado          #+#    #+#             */
/*   Updated: 2023/04/20 12:31:51 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*
int	main(void)
{
	char	name;

	name = 'b';
	
	printf("\n\t>>> USING ft_isdigit() <<<\n\n");
	printf("Sending \'%c\' : %d\n", name, ft_isdigit(name));

	if (ft_isdigit(name))
		printf("The char \'%c\' is numeric.\n", name);
	else
		printf("The char \'%c\' is not numeric.\n", name);
}
*/