/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <jpceia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 21:27:10 by jpceia            #+#    #+#             */
/*   Updated: 2021/02/09 19:15:00 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "ft_list.h"
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

void	*ft_memset(void *str, int c, int n);
void	*ft_bzero(void *str, int n);
void	*ft_memcpy(void *dest, const void *src, int n);
void	*ft_memccpy(void *dest, const void *src, int c, int n);
void	*ft_memmove(void *dest, const void *src, int n);
void	*ft_memchr(const void *str, int c, int n);
int		ft_memcmp(const void *str1, const void *str2, int n);
int		ft_strlen(const char *str);
int		ft_strlcat(char *dest, const char *src, int size);
int		ft_strlcpy(char *dest, const char *src, int size);
char	*ft_strchr(const char *str, int ch);
char	*ft_strrchr(const char *str, int ch);
char	*ft_strnstr(const char	*big, const char *little, int len);
int		ft_strncmp(const char *s1, const char *s2, int n);
int		ft_atoi(const char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	*ft_calloc(int n, int size);
char	*ft_strdup(char *src);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *str, char c);
char	*ft_itoa(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
int		ft_isspace(int c);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strndup(char const *str, int n);

#endif