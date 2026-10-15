/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batahrao <batahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 15:48:15 by batahrao          #+#    #+#             */
/*   Updated: 2026/10/15 11:49:14 by batahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <unistd.h>

int		ft_isalpha(int c);
int		ft_isalnum(int x);
int		ft_isdigit(int c);
int		ft_isascii(int x);
size_t	ft_strlen(const char *s);
void	*memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*memcpy(void *dest, const void *src, size_t n);
void	*memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int		toupper(int c);
int		ft_tolower(int c);

#endif