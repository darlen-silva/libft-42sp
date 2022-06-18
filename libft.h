/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dardo-na <dardo-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 00:56:26 by dardo-na          #+#    #+#             */
/*   Updated: 2022/06/13 00:56:35 by dardo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <unistd.h>
#include <stdlib.h>

char	*ft_strchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c);

size_t	ft_strlen(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t size);

char	*ft_strnstr(const char *big, const char *little, size_t len);

int		ft_atoi(const char *nptr);

void	ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char *s, int fd);

void	ft_putendl_fd(char *s, int fd);

int		ft_isalpha(int c);

int		ft_isdigit(int c);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);
// ft_toupper();
// ft_tolower();
// ft_strlen();
// ft_strchr();
// ft_strrchr();
// ft_strncmp();
// ft_memset();
// ft_bzero();
// ft_memchr();
// ft_memcpy();
// ft_memcmp();
// ft_memmove();
// ft_strlcpy();
// ft_strnstr();
// ft_strlcat();
// ft_atoi();
// ft_calloc();
// ft_strdup();
#endif // !LIBFT_H
