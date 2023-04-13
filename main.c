/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <bsalgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:39:49 by bsalgado          #+#    #+#             */
/*   Updated: 2023/04/13 17:53:41 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	name;

	name = 'b';
	printf("\n\t>>> USING isalpha() <<<\n\n");
	printf("Sending \'%c\'%d\n", name, ft_isalpha(name));
}
