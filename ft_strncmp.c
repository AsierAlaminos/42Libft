/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalamino <aalamino@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:50:01 by aalamino          #+#    #+#             */
/*   Updated: 2023/03/10 19:48:44 by aalamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		++i;
	}
	return (0);
}
/*
int main(void)
{
	char	str1[] = "";
	char	str2[] = "";
	int		n = 9;
	printf("ft_strncmp: %d\n", ft_strncmp(str1, str2, n));
	printf("strncmp: %d\n", strncmp(str1, str2, n));
	return (0);
}*/