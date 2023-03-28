void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	lista;

	lista = lst->next;
	if (!lst || !f)
		return ;
	while (lista)
	{
		f(lista->content);
		lista = lista->next;
	}
}
