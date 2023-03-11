/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalamino <aalamino@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:42:35 by aalamino          #+#    #+#             */
/*   Updated: 2023/03/10 19:48:19 by aalamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*a;
	char	*b;

	b = (char *)dst;
	a = (char *)src;
	i = 0;
	while (b[i] != '\0' && a[i] != '\0' && i < len)
	{
		b[i] = a[i];
		++i;
	}
	return (dst);
}
/*
int	main(void)
{
	char	src[] = "abcdefgh";
    char 	dst[] = "12345678";
	
	//printf("ft_memmove: %s\n");
	printf("antes: %s\n", dst);
	ft_memmove(dst + 4, src + 4, -1);
	printf("memmove: %s\n", dst);
	return (0);
}*/