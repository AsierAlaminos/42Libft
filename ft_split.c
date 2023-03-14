/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalamino <aalamino@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 18:15:28 by asmus37           #+#    #+#             */
/*   Updated: 2023/03/14 18:43:19 by aalamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

int	del_count(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[j] != '\0')
	{
		if (s[j] == c)
			++i;
		++j;
	}
	return (i);
}

int	str_count(char const *s, char c, int i)
{
	int	len;

	len = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		++i;
		++len;
	}
	return (len);
}

char	**add_str(char const *s, char **arr, int arr_len, char c)
{
	int	i;
	int	j;
	int	k;
	int	len;
	int	len_str;

	i = 0;
	k = 0;
	len_str = 0;
	while (i <= arr_len)
	{
		j = 0;
		len = str_count(s, c, len_str);
		len_str = len + len_str + 1;
		arr[i] = (char *)malloc(len);
		if (arr[i] == NULL)
			return (NULL);
		while (s[k] == c)
			++k;	
		while (j < len)
		{
			arr[i][j] = s[k];
			++k;
			++j;
		}
		++i;
	}
	return(arr);
}

char	**ft_split(char const *s, char c)
{
	int		arr_len;
	char	**arr;

	arr_len = del_count(s, c);
	arr = (char **)malloc(sizeof(char*) * (ft_strlen(s) - arr_len));
	if (arr == NULL)
		return (NULL);
	return (add_str(s, arr, arr_len, c));
}
/*
int	main(void)
{
	char	str[] = "hola buenas: como :andamoshola buenas: como :andamoshola buenas: como :andamoshola buenas: como :andamoshola buenas: como :andamoshola buenas: como :andamoshola buenas: como :andamoshola buenas: como :andamoshola buenas: como :andamoshola buenas: como :andamoshola buenas: como :andamoshola buenas: como :andamoshola buenas: como :andamoshola buenas: como :andamoshola buenas: como :andamos";
	char	c = ':';
	char	**strings;
	unsigned long	i;

	strings = ft_split(str, c);
	i = 0;
	printf("ft_string: \n{\n");
	while (i < sizeof(strings) + 2)
	{
		printf("|%s|\n", strings[i]);
		++i;
	}
	printf("}\n");
	return (0);
}*/