/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalamino <aalamino@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 17:09:09 by aalamino          #+#    #+#             */
/*   Updated: 2023/04/17 18:08:21 by aalamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstlen)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (dstlen == 0)
		return (len);
	while (i < len && src[i] != '\0' && i < (dstlen - 1))
	{
		dst[i] = src[i];
		++i;
	}
	if (dstlen != 0)
		dst[i] = '\0';
	return (len);
}
/*
void	ft_print_result(int n)
{
	char c;

	if (n >= 10)
		ft_print_result(n / 10);
	c = n % 10 + '0';
	write (1, &c, 1);
}

int	main(void)
{
	char	*dest;

	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
		return (0);
	ft_memset(dest, 0, 15);
	ft_memset(dest, 'r', 6);
	ft_print_result(ft_strlcpy(dest, "lorem ipsum dolor sit amet", 15));
	write(1, "\n", 1);
	write(1, dest, 15);
	ft_strlcpy(((void *)0), ((void *)0), 10);
	return (0);
}*/
