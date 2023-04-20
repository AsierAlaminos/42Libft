/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmus37 <asmus37@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 20:40:10 by asmus37           #+#    #+#             */
/*   Updated: 2023/04/20 12:39:14 by aalamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lista;
	t_list	*temp;
	t_list	*temp_two;

	if (!f || !lst)
		return (NULL);
	lista = malloc(sizeof(t_list));
	if (!lista)
		return (NULL);
	temp = lista;
	temp_two = lst;
	while (temp_two)
	{
		temp->content = f(temp_two->content);
		temp->next = malloc(sizeof(t_list));
		if (!temp)
			ft_lstclear(&temp, del);
		temp_two = temp_two->next;
		temp = temp->next;
	}
	return (lista);
}
