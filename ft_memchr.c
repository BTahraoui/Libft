/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batahrao <batahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 13:06:45 by batahrao          #+#    #+#             */
/*   Updated: 2026/10/15 16:26:13 by batahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *p;
	size_t i;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		if ((unsigned char)c == p[i])
			return ((unsigned char *)&p[i]);
		i++;
	}
	return (NULL);
}