void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list lista;

	lista = (*lst);
	if ((*lst))
	{
		while (lista->next != NULL)
			lista = lista->next
		lista->next = new;
	}
	if (!(*lst))
		((*lst) = new);
}
