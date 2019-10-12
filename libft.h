/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 14:17:00 by youkhart          #+#    #+#             */
/*   Updated: 2019/10/12 14:24:05 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
int				ft_tolower(int c);
int				ft_toupper(int c);
void			*ft_memset(void *ptr, int value, unsigned int n);
void			ft_bzero(void *ptr, int n);
void			*ft_memcpy(void *dest, const void *src, unsigned int n);
void			*ft_memccpy(void *dest, const void *src, int c, unsigned int n);
void			*ft_memmove(void *dest, const void *src, unsigned int count);
void			*ft_memchr(const void *ptr, int c, unsigned int n);
int				ft_memcmp(const void *p1, const void *p2, unsigned int n);
int				ft_strlen(const char *str);
char			*ft_strchr(const char *str, char c);
char			*ft_strrchr(const char *str, char c);
int				ft_strncmp(const char *s1, const char *s2, unsigned int n);
char			*ft_strnstr(const char *s1, const char *s2, unsigned int n);
unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int bufsize);
unsigned int	ft_strlcat(char *dst, const char *src, unsigned int bufsize);
char			*ft_strdup(const char *src);
void			*ft_calloc(unsigned int nitems, unsigned int size);
int				ft_atoi(const char *str);
char			*ft_itoa(int nbr);
char			*ft_substr(const char *s, unsigned int start, unsigned int len);
char			*ft_strjoin(const char *s1, const char *s2);
char			*ft_strtrim(const char *str, const char *set);
char			**ft_split(const char *str, char c);
char			*ft_strmapi(const char *str, char (*f)(unsigned int, char));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
#endif
