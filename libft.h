/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btahraoui <b.tahraoui.badr#gmail.com>      #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-01 11:31:53 by btahraoui         #+#    #+#             */
/*   Updated: 2026-10-01 11:31:53 by btahraoui        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

//WEEK 1: CHARACTER LOGIC, RAW MEMORY & STRINGS
//Day 1 based on RoadMap
int ft_isalpha(int c);
int	ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isprint(int c);
int	ft_isascii(int c);
int ft_strlen(char *str);
int	ft_toupper(int c);
int ft_tolower(int c);

#endif
