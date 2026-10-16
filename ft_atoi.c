/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batahrao <batahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 13:24:01 by batahrao          #+#    #+#             */
/*   Updated: 2026/10/16 21:31:18 by batahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	long	result;
	size_t	i;
	int		sign;
	int		digit;

	i = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	sign = 1;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	result = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		digit = nptr[i] - '0';
		result = result * 10 + digit;
		i++;
	}
	return (result * sign);
}
/*
#include <stdio.h>

int	main(int argc, char const *argv[])
{
	(void)argc;
	(void)argv;
	//printf("%d \n", ft_atoi("1337"));
	printf("%d \n", ft_atoi("2147483648"));
	//printf("%d \n", ft_atoi("++++1337"));
	//printf("%d \n", ft_atoi("42"));
	//printf("%d \n", ft_atoi("-9223372036854775807"));
	printf("%d", atoi("2147483648"));
	return (0);
}*/
