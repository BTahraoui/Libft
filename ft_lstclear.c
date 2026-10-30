/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batahrao <batahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 21:58:20 by batahrao          #+#    #+#             */
/*   Updated: 2026/10/30 22:34:28 by batahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static void	del_content(void *content)
{
	t_list	*next_node;

	free(content);
}*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!lst || !*lst || !del)
		return ;
	while (*lst)
	{
		t_list	*next_node;

		next_node = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next_node;
	}
	*lst = NULL;
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*head;
	char	*str1;
	char	*str2;

	str1 = ft_strdup("holla");
	str2 = ft_strdup("amigo");
	head = ft_lstnew(str1);
	head->next = ft_lstnew(str2);
	printf("Head pointer before clear: %p\n", (void *)head);
	ft_lstclear(&head, &del_content);
	printf("Head pointer after clear: %p\n", (void *)head);
	return (0);
}
*/
