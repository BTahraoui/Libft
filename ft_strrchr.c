/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batahrao <batahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 12:23:28 by batahrao          #+#    #+#             */
/*   Updated: 2026/10/27 15:02:29 by batahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	s_length;

	s_length = ft_strlen(s);
	while (1)
	{
		if (c == s[s_length])
			return ((char *)&s[s_length]);
		if (s_length == 0)
			break ;
		s_length--;
	}
	return (NULL);
}
