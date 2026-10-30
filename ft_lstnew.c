/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batahrao <batahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 15:10:45 by batahrao          #+#    #+#             */
/*   Updated: 2026/10/30 10:21:21 by batahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

/*
#include <stdio.h>

int	main(void)
{
	t_list	*head;
	int		x;
	t_list	*current;
	t_list	*next_node;

	head = NULL;
	x = 15;
	head = ft_lstnew("hello, World");
	head->next = ft_lstnew("banana");
	head->next->next = ft_lstnew("cherry");
	head->next->next->next = ft_lstnew(&x);
	current = head;
	while (current != NULL)
	{
		printf("%s\n", (char *)current->content);
		if (current->next == NULL)
		{
			printf("%d\n", *(int *)current->content);
		}
		current = current->next;
	}
	current = head;
	while (current != NULL)
	{
		next_node = current->next; // Save the next pointer
		free(current);             // Free the current node
		current = next_node;       // Move to the next node
	}
	head = NULL;
	current = NULL;
	return (0);
}

*/
