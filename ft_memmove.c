/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batahrao <batahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 10:21:35 by batahrao          #+#    #+#             */
/*   Updated: 2026/10/22 11:44:35 by batahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (n == 0 || dest == src)
		return (dest);
	if (d > s && d < s + n)
		while (n-- > 0)
			d[n] = s[n];
	else
		ft_memcpy(d, s, n);
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int	main(int argc, char const *argv[])
{
	char	str1[10] = "hello";

	(void)argc;
	(void)argv;
	//char str2[5] = "hi";
	ft_memmove(str1, str1, 1);
	printf("%s \n", str1);
	return (0);
}
*/