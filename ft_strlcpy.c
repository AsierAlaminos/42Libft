/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalamino <aalamino@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 17:09:09 by aalamino          #+#    #+#             */
/*   Updated: 2023/03/20 15:30:27 by aalamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstlen)
{
	size_t	i;
	size_t	len;

	i = 0;
	if (src == NULL)
		return (0);
	len = ft_strlen(src);
	if (dstlen == 0)
		return (len);
	while (i < len && dst[i] != '\0' && src[i] != '\0' && i < (dstlen - 1))
	{
		dst[i] = src[i];
		++i;
	}
	if (dstlen != 0)
		dst[i] = '\0';
	return (len);
}
/*
int	main(void)
{
	char	*dest;

	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
		return (0);
	ft_memset(dest, 0, 15);
	ft_memset(dest, 'r', 6);
	printf("Antes: %s\n", dest);
	printf("size_t: %zu\n", ft_strlcpy(dest, "lorem ipsum dolor sit amet", 15));
	printf("Despues: %s\n", dest);
	return (0);
}*/
