/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalamino <aalamino@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 18:44:19 by aalamino          #+#    #+#             */
/*   Updated: 2023/03/14 19:25:39 by aalamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_itoa(int n)
{
	char	*pointer;
	
	pointer = (char *)malloc(sizeof(int));
	if (pointer == NULL)
		return (NULL);
	if (n < 0)
	{
		pointer += '-';
	}
	while ()
	{
		
	}
	
	printf("pointer: %s\n", pointer);
	return (pointer);
}

int	main(void)
{
	int	n = -1234;
	printf("ft_itoa: %s", ft_itoa(n));
	return (0);
}
