/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalamino <aalamino@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:05:30 by aalamino          #+#    #+#             */
/*   Updated: 2023/03/20 15:59:33 by aalamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	character;
	char	*str;

	i = 0;
	character = (char) c;
	str = (char *) s;
	while (str[i] != '\0')
	{
		if (str[i] == character)
			return (&str[i]);
		++i;
	}
	if (c == '\0')
		return (&str[i]);
	return (NULL);
}
/*
int	main(void)
{
	char	str[] = "hola buenas";
	char	c = 'w';
	printf("ft_strchr: %s\n", ft_strchr(str, c));
	printf("strchr: %s\n", strchr(str, c));
	return (0);
}*/
