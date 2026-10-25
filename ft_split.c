/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batahrao <batahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 11:26:48 by batahrao          #+#    #+#             */
/*   Updated: 2026/10/25 12:34:38 by batahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			words++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (words);
}

static char	**fill_res(char const *s, char c, char **res, size_t words)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (j < words)
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		res[j] = ft_substr(s, start, i - start);
		if (!res[j])
		{
			while (j > 0)
				free(res[--j]);
			free(res);
			return (NULL);
		}
		j++;
	}
	res[j] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	word_c;

	if (!s)
		return (NULL);
	word_c = count_words(s, c);
	res = (char **)malloc((word_c + 1) * sizeof(char *));
	if (res == NULL)
		return (NULL);
	if (!fill_res(s, c, res, word_c))
		return (NULL);
	return (res);
}
