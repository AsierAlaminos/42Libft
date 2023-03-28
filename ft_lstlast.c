t_list	*ft_lstlas(t_list *lst)
{
	t_list *p;

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
