/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalamino <aalamino@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 17:09:09 by aalamino          #+#    #+#             */
/*   Updated: 2023/03/16 17:07:27 by aalamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstlen)
{
	size_t	i;

	i = 0;
	while (i < dstlen && dst != '\0' && src != '\0')
	{
		dst[i] = src[i];
		++i;
	}
	if (dstlen != 0)
		dst[i] = '\0';
	return (i);
}
/*
int	main(void)
{
	char	src[] = "hola buenas";
	char	dst[13] = "jajajaj";
	printf("Antes: %s\n", dst);
	ft_strlcpy(dst, src, sizeof(dst));
	printf("Despues: %s\n", dst);
	return (0);
}*/
