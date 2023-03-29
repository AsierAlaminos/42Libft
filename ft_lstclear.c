/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalamino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 15:36:53 by aalamino          #+#    #+#             */
/*   Updated: 2023/03/29 15:40:01 by aalamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lista;
	t_list	*temp;

	if (!del || !lst || !*lst)
		return ;
	lista = *lst;
	while (lst && *lst)
	{
		temp = lista->next;
		del(aux->content);
		free(aux);
		lista = temp;
	}
	*lst = NULL;
}
