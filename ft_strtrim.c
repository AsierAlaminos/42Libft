/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmus37 <asmus37@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 16:14:47 by asmus37           #+#    #+#             */
/*   Updated: 2023/03/12 18:09:18 by asmus37          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	string_detect(char const *str, char character)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == character)
			return (1);
		++i;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*pointer;

	i = 0;
	j = strlen(s1);
	while (string_detect(set, s1[i]) && s1[i] != '\0')
		++i;
	while (string_detect(set, s1[j - 1]) && (j - 1) > 0)
		--j;
	if (j < i)
		j = i;
	pointer = malloc(j - i + 1);
	if (pointer == NULL)
		return (NULL);
	while (i < j)
		pointer[k++] = s1[i++];
	pointer[k] = '\0';
	return (pointer);
}

int	main(void)
{
	char	str[] = "hola buenas que tal andamos";
	char	set[] = "aob";
	printf("ft_strtrim: %s\n",ft_strtrim(str, set));
	return (0);
}