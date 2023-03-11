/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalamino <aalamino@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:10:53 by aalamino          #+#    #+#             */
/*   Updated: 2023/03/11 11:04:22 by aalamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;
	char	*a;
	char	*b;

	i = 0;
	a = (char *) src;
	b = (char *) dst;
	while (n > i)
	{
		b[i] = a[i];
		++i;
	}
	return (dst);
}
/*
int	main(void)
{
	static int	array1[5];
	static int	array2[5];
	static int	array3[] = {1, 2, 3, 4, 5};
	ft_memcpy(array1, array3, sizeof(array3));
	printf("ft_memcpy: %d %d %d %d %d\n",
	 array1[0], array1[1], array1[2], array1[3], array1[4]);
	memcpy(array2, array3, sizeof(array3));
	printf("memcpy: %d %d %d %d %d\n",
	 array2[0], array2[1], array2[2], array2[3], array2[4]);
	return (0);
}*/