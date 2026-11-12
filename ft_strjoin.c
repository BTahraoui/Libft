/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batahrao <batahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 17:20:44 by batahrao          #+#    #+#             */
/*   Updated: 2026/11/12 11:50:38 by batahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	mem_allocated;
	char	*copy;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	mem_allocated = s1_len + s2_len;
	copy = (char *)malloc((mem_allocated + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	ft_memcpy(copy, (char *)s1, s1_len);
	ft_memcpy(copy + s1_len, (char *)s2, s2_len);
	copy[mem_allocated] = '\0';
	return (copy);
}
