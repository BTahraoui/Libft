/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batahrao <batahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 22:39:49 by batahrao          #+#    #+#             */
/*   Updated: 2026/10/30 22:50:57 by batahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
#include <stdio.h>

void	ft_print(void *content)
{
		printf("%s\n", (char *)content);
}
int main (void)
{
	t_list	*head;

	head = ft_lstnew(ft_strdup("hello"));
	head -> next = ft_lstnew(ft_strdup("alo"));
	ft_lstiter(head, &ft_print);
	return (0);
}
*/
