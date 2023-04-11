/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmus37 <asmus37@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 20:40:10 by asmus37           #+#    #+#             */
/*   Updated: 2023/03/28 20:40:11 by asmus37          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lista;
	t_list	*temp;
	t_list	*temp_two;

	lista = lst;
	temp = malloc(sizeof(t_list));
	if (!temp)
		return (0);
	temp_two = temp;
	while (lista)
	{
		temp_two->content = f(lista->content);
		temp_two->next = malloc(sizeof(t_list));
		if (!temp_two->next)
			ft_lstclear(&lista, del);
		lista = lista->next;
		temp_two = temp_two->next;
	}
	return (temp);
}
