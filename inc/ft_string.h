/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbooke <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 02:41:29 by hbooke            #+#    #+#             */
/*   Updated: 2020/11/04 11:07:59 by hbooke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include <stddef.h>

size_t		ft_strlen(const char *str);
size_t		ft_strnlen(const char *s, size_t maxlen);

char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);

char		*ft_strstr(const char *str, const char *needle);
char		*ft_strnstr(const char *s, const char *needle, size_t n);

int			ft_strcmp(const char *s1, const char *s2);
int			ft_strncmp(const char *s1, const char *s2, size_t n);

char		*ft_strcpy(char *dest, const char *src);
char		*ft_strncpy(char *dest, const char *src, size_t n);
size_t		ft_strlcpy(char *dest, const char *src, size_t size);

char		*ft_strdup(const char *s);
char		*ft_strndup(const char *s, size_t size);

char		*ft_strcat(char *dest, const char *src);
char		*ft_strncat(char *dest, const char *src, size_t n);
size_t		ft_strlcat(char *dest, const char *src, size_t n);

char		*ft_strjoin(char *str1, char *str2);
char		**ft_split(char *str, char c);

char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));

size_t		ft_word_count(char *str, const char sep);
void		ft_clear_strs(char **strs, size_t size);

void		ft_bzero(void *s, size_t n);
void		*ft_memchr(const void *ptr, int c, size_t n);
void		*ft_memrchr(const void *ptr, int c, size_t n);
int			ft_memcmp(const void *ptr1, const void *ptr2, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memccpy(void *dest, const void *src, int c, size_t n);
void		*ft_memset(void *str, int c, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t num);
void		*ft_memswap(void *dest, void *src, size_t num);

#endif
