/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmus37 <asmus37@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 18:15:28 by asmus37           #+#    #+#             */
/*   Updated: 2023/03/14 11:29:33 by asmus37          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static int	str_count(char const *s, char c, int i)
{
	int	j;
	
	j = 0;
	while (s[i] != c && s[i] != '\0')
	{
		++i;
		++j;
	}
	return (j);
}

static int	rem_del(char const *s1, char c)
{
	int	comp;
	int	cles;

	comp = 0;
	cles = 0;
	if (*s1 == '\0')
		return (0);
	while (*s1 != '\0')
	{
		if (*s1 == c)
			cles = 0;
		else if (cles == 0)
		{
			cles = 1;
			comp++;
		}
		s1++;
	}
	return (comp);
}

static char	**liberar(char const **arr, int j)
{
	while (j > 0)
	{
		--j;
		free((void *)arr[j]);
	}
	free(arr);
	return (NULL);
}

static char	**create_arr(char const *s, char **arr, char c, int len)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (s[i] != '\0' && j < len)
	{
		k = 0;
		while (s[i] == c)
			++i;
		arr[j] = (char *)malloc(sizeof(char) * str_count(s, c, i) + 1);
		if (arr[j] == NULL)
			return (liberar((char const **) arr, j));
		while (s[i] != '\0' && s[i] != c)
		{
			arr[j][k] = s[i];
			++k;
			++i;
		}
	}
	arr[j] = 0;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		len;

	if (s == NULL)
		return (NULL);
	len = rem_del(s, c);
	arr = (char **)malloc(sizeof(char *) * (len + 1));
	if (arr == NULL)
		return (NULL);
	return (create_arr(s, arr, c, len));
}

int	main(void)
{
	char	str[] = "hola buenas: como :andamos";
	char	c = ':';
	char	**strings;
	int	i;

	strings = ft_split(str, c);
	i = 0;
	printf("ft_string: \n{\n");
	while (i < 3)
	{
		printf("|%s|\n", strings[i]);
		++i;
	}
	printf("}\n");
	return (0);
}