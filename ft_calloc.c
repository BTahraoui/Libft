/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batahrao <batahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 21:57:58 by batahrao          #+#    #+#             */
/*   Updated: 2026/10/16 22:50:17 by batahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (ptr = malloc(1));
	if (size != 0 && nmemb > (size_t)-1 / size) // hundel the overflow
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

/*
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>


int	main(void)
{
	int		*arr;
	size_t	i;

	arr = ft_calloc(5, sizeof(int));
	if (arr == NULL)
	{
		printf("Allocation failed\n");
		return (1);
	}
	i = 0;
	while (i < 5)
	{
		printf("arr[%zu] = %d\n", i, arr[i]);
		i++;
	}
	free(arr);
	return (0);
}
*/
