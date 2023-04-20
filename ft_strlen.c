/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <bsalgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:29:05 by bsalgado          #+#    #+#             */
/*   Updated: 2023/04/20 16:56:45 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/*
int	main(void)
{
	char *str = "bruno";

	printf("\n\t>>> USING ft_strlen() <<<\n\n");
	
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	printf("The Length of \'%s\' = %ld\n", str, ft_strlen(str));
	return (0);
}
*/