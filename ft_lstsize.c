int	ft_lstsize(t_list *lst)
{
    int i;

    i = 0;
    while (lst != NULL)
    {
        ++n;
        lst = lst->next;
    }
    return (i);
}
