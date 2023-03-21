/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalamino <aalamino@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 18:15:28 by asmus37           #+#    #+#             */
/*   Updated: 2023/03/21 18:41:37 by aalamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

static int	del_count(char const *s, char c)
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

static int	str_count(char const *s, char c, int i)
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

static char	**add_str(char const *s, char **arr, int arr_len, char c)
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
		arr[i] = (char *)malloc(len + 1);
		if (arr[i] == NULL)
			return (NULL);
		while (s[k] == c)
			++k;
		while (j < len)
			arr[i][j++] = s[k++];
		arr[i][j] = '\0';
		++i;
	}
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	int		arr_len;
	char	**arr;

	arr_len = del_count(s, c);
	arr = (char **)malloc(sizeof(char *) * (ft_strlen(s) - arr_len));
	if (arr == NULL)
		return (NULL);
	return (add_str(s, arr, arr_len, c));
}

int	main(void)
{
	char	str[] = "          ";
	char	del = ' ';
	char	**splited;
	size_t		i;

	splited = ft_split(str, del);
	i = 0;
	while (i < sizeof(splited))
	{
		printf("ft_split: %s", splited[i]);
		++i;
	}
	return (0);
}
