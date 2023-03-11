/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalamino <aalamino@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 17:26:05 by aalamino          #+#    #+#             */
/*   Updated: 2023/03/11 11:04:48 by aalamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	j = 0;
	while (dst[j] != '\0')
		++j;
	i = 0;
	while (src[i] != '\0' && i < dstsize)
	{
		printf("Aqui2");
		dst[j + i] = src[i];
		++i;
	}
	if (dstsize != '\0' && j + i < dstsize)
		dst[i + j] = '\0';
	return (i + j);
}
/*
int	main(void)
{
	char	src[] = "hola buenas";
	char	dst[20] = "jajajaj";
	printf("Antes: %s\n", dst);
	strlcat(dst, src, -1);
	printf("Despues: %s\n", dst);
	return (0);
}*/