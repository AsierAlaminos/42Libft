/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalamino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 15:37:25 by aalamino          #+#    #+#             */
/*   Updated: 2023/03/29 15:40:29 by aalamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlas(t_list *lst)
{
	t_list	*p;

	p = lst;
	if (!p || !lst)
		return (NULL);
	if (p->next == NULL)
		return (p);
	while (p)
	{
		if (p->next == NULL)
			return (p);
		p = p->next;
	}
	return (p);
}
