/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batahrao <batahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 11:26:48 by batahrao          #+#    #+#             */
/*   Updated: 2026/10/27 10:51:48 by batahrao         ###   ########.fr       */
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

static void	free_mem(char **res, size_t j)
{
	while (j > 0)
	{
		j--;
		free(res[j]);
	}
	free(res);
}

static void	fill_str(const char *s, char c, char **res, size_t words_c)
{
	size_t	i;
	size_t	start;
	size_t	j;

	i = 0;
	j = 0;
	while (j < words_c)
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		res[j] = ft_substr(s, start, i - start);
		if (!res[j])
			return (free_mem(res, j));
		j++;
	}
	res[j] = NULL;
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
	fill_str(s, c, res, word_c);
	return (res);
}
