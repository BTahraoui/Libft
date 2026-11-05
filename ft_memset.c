/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batahrao <batahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 10:44:06 by batahrao          #+#    #+#             */
/*   Updated: 2026/11/05 12:26:13 by batahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*clone;
	size_t			i;

	i = 0;
	clone = (unsigned char *)s;
	while (i < n)
	{
		clone[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
