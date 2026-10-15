/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batahrao <batahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 10:44:06 by batahrao          #+#    #+#             */
/*   Updated: 2026/10/15 10:16:51 by batahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memset(void *s, int c, size_t n)
{
	unsigned char	*clone;

	clone = (unsigned char *)s;
	while (n--)
		clone[n] = (unsigned char)c;
	return (s);
}
