/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batahrao <batahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 21:13:57 by batahrao          #+#    #+#             */
/*   Updated: 2026/10/30 21:55:15 by batahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static void	del_content(void *content)
{
	free(content);
}*/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*
int	main(void)
{
	t_list	*new_node;
	char	*content;

	content = ft_strdup("hello guys");
	if (!content)
		return (1);
	new_node = ft_lstnew(content);
	if (!new_node)
	{
		free(content);
		return(1);
	}
	ft_lstdelone(new_node, &del_content);
	return (0);
}
*/
