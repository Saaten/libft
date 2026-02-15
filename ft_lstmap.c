/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayeghia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 19:57:25 by sayeghia          #+#    #+#             */
/*   Updated: 2026/02/15 20:12:49 by sayeghia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*lst2;

	if (!lst || !f || !del)
		return (NULL);
	node = ft_lstnew(f(lst ->content));
	if (!node)
		return (NULL);
	lst2 = node;
	lst = lst->next;
	while (lst)
	{
		node = ft_lstnew(f(lst ->content));
		if (!node)
		{
			ft_lstclear(&lst2, del);
			return (NULL);
		}
		ft_lstadd_back(&lst2, node);
		lst = lst -> next;
	}
	return (lst2);
}
