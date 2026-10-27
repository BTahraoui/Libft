/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batahrao <batahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 10:57:28 by batahrao          #+#    #+#             */
/*   Updated: 2026/10/27 15:06:20 by batahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	size_allocated(long n)
{
	size_t	n_len;

	n_len = 0;
	if (n <= 0)
	{
		n_len++;
		n = -n;
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		n_len++;
	}
	return (n_len);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	size;
	long	nbr;

	nbr = (long)n;
	size = size_allocated(nbr);
	str = malloc((size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (nbr < 0)
		nbr = -nbr;
	while (nbr > 0)
	{
		str[size - 1] = (nbr % 10) + '0';
		nbr /= 10;
		size--;
	}
	if (n < 0)
		str[0] = '-';
	else if (n == 0)
		str[0] = '0';
	return (str);
}
