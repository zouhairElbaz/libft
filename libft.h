/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-baz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 15:24:17 by zel-baz           #+#    #+#             */
/*   Updated: 2024/01/01 02:08:13 by zel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <limits.h>

#ifndef LIBFT_H
#define LIBFT_H
//Part 1
int	ft_atoi(const char *str);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
size_t	ft_strlen(const char *str);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
void	ft_bzero(void *str, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *dest, const void *src, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t destsize);
size_t	ft_strlcat(char *dest, const char *src, size_t destsize);
char	*ft_strnstr(const char *str, const char *tofind, size_t n);
void	*ft_calloc(size_t items, size_t size);
char    *ft_strdup(const char *str);
void    *ft_memmove(void *dest, const void *src, size_t len);
// Part 2
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(const char *s1, const char *set);
void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *s, int fd);
void    ft_putendl_fd(char *s, int fd);
void    ft_putnbr_fd(int n, int fd);
char    *ft_strmapi(char const *str, char (*f)(unsigned int, char));
void    ft_striteri(char *s, void (*f)(unsigned int, char*));
char    *ft_itoa(int c);

// Benus part
typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;

t_list  *ft_lstnew(void *constent);
void    ft_lstadd_front(t_list **lst, t_list *new);


#endif
