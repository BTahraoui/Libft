/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batahrao <batahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:03:19 by batahrao          #+#    #+#             */
/*   Updated: 2026/10/22 11:08:48 by batahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	i = 0;
	while (i < size && dst[i] != '\0')
		i++;
	dst_len = i;
	if (size <= dst_len)
		return (size + src_len);
	i = 0;
	while (src[i] != '\0' && dst_len + i < size - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

/*#include <stdio.h>

int	main(int argc, char const *argv[])
{
	char	src[100] = "hello";
	char	dst[100] = "world";

	(void)argv;
	(void)argc;
	ft_strlcat(dst, src, sizeof(dst) - ft_strlen(dst) - 1);
	printf("%s\n", dst);  // call once
	return (0);
}*/
