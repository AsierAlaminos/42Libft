/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalamino <aalamino@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:42:35 by aalamino          #+#    #+#             */
/*   Updated: 2023/03/16 16:48:47 by aalamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*a;
	char	*b;

	if (dst == NULL && src == NULL)
		return (NULL);
	b = (char *)dst;
	a = (char *)src;
	while (len > 0)
	{
		--len;
		b[len] = a[len];
	}
	return (dst);
}
/*
int	main(void)
{
	char	src[] = "lorem ipsum dolor sit amet";
	char 	src2[] = "lorem ipsum dolor sit amet";
    char 	*dst;
	char	*dst2;
	
	dst = src + 1;
	dst2 = src2 + 1;
	printf("antes: %s\n", dst);
	ft_memmove(dst, src, 8);
	printf("ft_memmove: %s\n", dst);
	memmove(dst2, src2, 8);
	printf("memmove: %s\n", dst2);
	return (0);
}*/
