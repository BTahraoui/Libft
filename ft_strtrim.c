/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batahrao <batahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 17:29:31 by batahrao          #+#    #+#             */
/*   Updated: 2026/10/27 11:20:46 by batahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*empty_str(void)
{
	char	*ptr;

	ptr = (char *)malloc(1);
	if (ptr == NULL)
		return (NULL);
	ptr[0] = '\0';
	return (ptr);
}

static size_t	calc_start(char const *s1, char const *set)
{
	size_t	start;

	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	return (start);
}

static size_t	calc_end(char const *s1, char const *set, size_t start)
{
	size_t	end;

	end = ft_strlen(s1) - 1;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	mem_allocated;
	size_t	i;
	char	*ptr;

	start = calc_start(s1, set);
	if (s1[start] == '\0')
		return (empty_str());
	end = calc_end(s1, set, start);
	mem_allocated = end - start + 1;
	ptr = (char *)malloc((mem_allocated + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (start <= end)
	{
		ptr[i] = s1[start];
		start++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*set;
	char	*p;

	s1 = "xxxhellocxxs";
	set = "xs";
	p = ft_strtrim(s1, set);
	printf("%s\n", p);
	free(p);
	p = NULL;
	return (0);
}
*/
