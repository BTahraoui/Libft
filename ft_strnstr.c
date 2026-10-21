/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batahrao <batahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 16:50:14 by batahrao          #+#    #+#             */
/*   Updated: 2026/10/16 13:23:03 by batahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == '\0')
		return ((char *)big);
    
    while (i < len && big[i])
    {
        j = 0;
        while (i + j < len && big[i + j] && big [i + j] == little[j])
            j++;
        if (!little[j])
            return ((char *)&big[i]);
        i++;
    }
	return (NULL);
}
/*
#include <stdio.h>
int	main(int argc, char const *argv[])
{
	(void)argv;
	(void)argc;
    
	const char *largestring = "Foo Bar Baz";
    const char *smallstring = "Ba";
    char *ptr;

    ptr = ft_strnstr(largestring, smallstring, 6);
    if (ptr == NULL)
        printf("Not found\n");
    else
        printf("%s\n", ptr);
	return (0);
}
*/