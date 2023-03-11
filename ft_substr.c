/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalamino <aalamino@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 11:32:46 by aalamino          #+#    #+#             */
/*   Updated: 2023/03/11 11:41:07 by aalamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*pointer;

	i = (size_t) start;
	pointer = (char *)malloc(strlen(s));
	while (i < len)
	{
		++i;
	}
	return
}

int	main(void)
{
	char	str[] = "hola buenas como andamos";
	printf("ft_substr: %s", ft_substr(str, 2, 6));
	return (0);
}