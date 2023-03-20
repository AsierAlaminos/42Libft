/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalamino <aalamino@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:47:03 by aalamino          #+#    #+#             */
/*   Updated: 2023/03/16 15:43:39 by aalamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	num;
	int	neg;

	i = 0;
	neg = 1;
	num = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r'
		|| (str[i] >= '0' && str[i] <= '9') || str[i] == '-')
	{
		if (str[i] == '-')
		{
			if (neg == -1)
				return (num * neg);
			if (str[i + 1] < '0' || str[i] > '9')
				return (num * neg);
			neg = neg * -1;
		}
		if (str[i] >= '0' && str[i] <= '9')
			num = num * 10 + (int)(str[i] - '0');
		++i;
	}
	return (num * neg);
}
/*
int	main(void)
{
	char	str[] = "-123+3a43";
	printf("ft_atoi: %d\n", ft_atoi(str));
	printf("atoi: %d\n", atoi(str));
	return (0);
}*/
