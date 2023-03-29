/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalamino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 15:33:50 by aalamino          #+#    #+#             */
/*   Updated: 2023/03/29 15:39:11 by aalamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	lista;

	lista = (*lst);
	if ((*lst))
	{
		while (lista->next != NULL)
			lista = lista->next;
			lista->next = new;
	}
	if (!(*lst))
		((*lst) = new);
}
