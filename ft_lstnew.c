/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalamino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 18:17:40 by aalamino          #+#    #+#             */
/*   Updated: 2023/03/29 15:42:14 by aalamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	lista;

	lista = (t_list *)malloc(sizeof(t_list));
	if (!lista)
		return (0);
	lista->content = (void *)content;
	return (lista);
}
