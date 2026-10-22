/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batahrao <batahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 21:34:18 by batahrao          #+#    #+#             */
/*   Updated: 2026/10/22 11:08:46 by batahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy;
	size_t	s_len;
	size_t	i;

	i = 0;
	s_len = ft_strlen(s);
	if (!s)
		return (NULL);
	copy = malloc((s_len + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	while (s[i])
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*#include <stdio.h>
int	main(int argc, char const *argv[])
{
	char	*ori;
	char	*copy;

	(void)argc;
	(void)argv;
	ori = "hello darkness my old freind";
	copy = ft_strdup(ori);
	printf("%s. \n", copy);
	free(copy);
	copy = NULL;
	return (0);
}
*/