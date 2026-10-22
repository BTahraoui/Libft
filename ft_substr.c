/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batahrao <batahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 22:48:24 by batahrao          #+#    #+#             */
/*   Updated: 2026/10/22 11:41:22 by batahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*empty_str(void)
{
	char	*ptr;

	ptr = malloc(1);
	if (ptr == NULL)
		return (NULL);
	ptr[0] = '\0';
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	substr_len;
	size_t	i;
	size_t	source_len;
	char	*ptr;

	if (s == NULL)
		return (NULL);
	source_len = ft_strlen(s);
	if (start >= source_len)
		return (empty_str);
	substr_len = source_len - start;
	if (substr_len > len)
		substr_len = len;
	ptr = (char *)malloc((substr_len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < substr_len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*str;
	char	*ptr;

	str = "Hello Worlds";
	ptr = ft_substr(str, 2, 0);
	if (*ptr == '\0')
		printf("NULL TERM");
	else
		printf("%s\n", ptr);
	str = NULL;
	return (0);
}
*/