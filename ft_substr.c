/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalamino <aalamino@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 11:32:46 by aalamino          #+#    #+#             */
/*   Updated: 2023/03/21 18:30:48 by aalamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	char	*pointer;

	if (start > ft_strlen(s))
		return (ft_strdup(""));
	pointer = (char *)malloc(len + 1);
	if (pointer == NULL)
		return (NULL);
	j = 0;
	while (j < len)
	{
		pointer[j] = s[start];
		++j;
		++start;
	}
	pointer[j] = '\0';
	return (pointer);
}
/*
int	main(void)
{
	char	str[] = "lorem ipsum dolor sit amet";
	char	*substr;

	substr = ft_substr(str, 0, 10);
	printf("ft_substr: %s", substr);
	return (0);
}*/
