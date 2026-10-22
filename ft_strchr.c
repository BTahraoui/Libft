/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batahrao <batahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 11:58:23 by batahrao          #+#    #+#             */
/*   Updated: 2026/10/22 11:08:43 by batahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (c == s[i])
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

/*
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*s;
	char	*result;

	s = "babobo";
	result = ft_strchr(s, '\0');
	if (result != NULL)
		printf("found it \n");
	else
		printf("Not Found!\n");
	return (0);
}*/
