/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmus37 <asmus37@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 18:15:28 by asmus37           #+#    #+#             */
/*   Updated: 2023/03/12 19:47:26 by asmus37          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	str_count(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		++i;
	return (i);
}

void	add_str(char const *s, char **arr, int len, int pos)
{
	int	i;

	i = 0;
	while (i < len)
	{
		arr[pos][i] = s[i];
		++i;
	}
}

int	str_len(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			++j;
		++i;
	}
	return (strlen(s) - j);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		len;
	int		pos;
	char	**arr;

	i = 0;
	pos = 0;
	arr = (char **)malloc(sizeof(char *) * str_len(s, c));
	while (s[i] != '\0')
	{
		len = str_count(&s[i], c);
		if (s[i] == c)
		{
			add_str(&s[i], arr, len, pos);
			++pos;
		}
		++i;
	}
	return (arr);
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