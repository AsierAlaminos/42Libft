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
