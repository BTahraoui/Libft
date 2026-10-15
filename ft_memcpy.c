/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batahrao <batahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 15:06:01 by batahrao          #+#    #+#             */
/*   Updated: 2026/10/14 10:18:23 by batahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*src_copy;
	unsigned char		*dest_copy;
	size_t				i;

	i = 0;
	src_copy = (const unsigned char *)src;
	dest_copy = (unsigned char *)dest;
	while (i < n)
	{
		dest_copy[i] = src_copy[i];
		i++;
	}
	return (dest);
}
