/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batahrao <batahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 17:20:44 by batahrao          #+#    #+#             */
/*   Updated: 2026/10/24 17:29:01 by batahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *d, char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		d[i] = s[i];
		i++;
	}
	d[i] == '\0';
	return (d);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	mem_allocated;
	char	*copy;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	mem_allocated = s1_len + s2_len;
	copy = (char *)malloc((mem_allocated + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	ft_strcpy(copy, (char *)s1);
	ft_strcpy(copy + s1_len, (char *)s2);
	return (copy);
}
/*
#include <stdio.h>

int	main(void)
{
	char *s1 = "hello";
	char *s2 = " world";
	char *p = ft_strjoin(s1, s2);
	printf("%s\n", p);
	free(p);
	p = NULL;
	return (0);
}*/