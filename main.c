/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalamino <aalamino@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:48:19 by aalamino          #+#    #+#             */
/*   Updated: 2023/03/13 16:57:31 by aalamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
	int	i;
	int	*memory_space = (int *)calloc(10, sizeof(int));
	int	*memory_space2 = (int *)ft_calloc(10, sizeof(int));
	
	i = 0;
	printf("calloc: ");
	while (i < 10)
	{
		printf("%d ", memory_space[i]);
		++i;
	}
	i = 0;
	printf("\nft_calloc: ");
	while (i < 10)
	{
		printf("%d ", memory_space2[i]);
		++i;
	}	
	return (0);
}