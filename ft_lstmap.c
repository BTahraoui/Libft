/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batahrao <batahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 10:58:15 by batahrao          #+#    #+#             */
/*   Updated: 2026/11/05 11:14:30 by batahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_head;
	t_list	*curr;
	t_list	*new_node;
	void	*clone;

	if (!lst || !f || !del)
		return (NULL);
	new_head = NULL;
	curr = lst;
	while (curr != NULL)
	{
		clone = f(curr->content);
		new_node = ft_lstnew(clone);
		if (!new_node)
		{
			if (clone)
				del(clone);
			ft_lstclear(&new_head, del);
			return (NULL);
		}
		ft_lstadd_back(&new_head, new_node);
		curr = curr->next;
	}
	return (new_head);
}
