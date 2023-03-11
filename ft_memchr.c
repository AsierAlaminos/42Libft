/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalamino <aalamino@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:01:18 by aalamino          #+#    #+#             */
/*   Updated: 2023/03/10 19:48:46 by aalamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	char			*str;
	unsigned char	character;

	i = 0;
	str = (char *)s;
	character = c;
	while (i < n && str[i] != '\0')
	{
		if (str[i] == c)
			return (&str[i]);
		++i;
	}
	return (NULL);
}
/*
int	main(void)
{
	int	str1[] = {1, 2, 3, 4, 5};
	int		c = 5;
	int		n = 1;
	printf("ft_memchr: %s\n", ft_memchr(str1, c, sizeof(str1) - n));
	printf("memchr: %s\n", memchr(str1, c, sizeof(str1) - n));
	return (0);
}*/