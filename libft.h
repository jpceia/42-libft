
#ifndef LIBFT_H
# define LIBFT_H

# include "ft_list.h"

void	*ft_memset(void *str, int c, int n);
void	*ft_bzero(void *str, int n);
void	*ft_memcpy(void *dest, const void *src, int n);
void	*ft_memccpy(void *dest, const void *src, int c, int n);


void	*ft_memchr(const void *str, int c, int n);
int		ft_memcmp(const void *str1, const void *str2, int n);
int		ft_strlen(char *str);


char	*ft_strchr(const char *str, int ch);
char	*ft_strrchr(const char *str, int ch);
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

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char* s, int fd);
void	ft_putendl_fd(char* s, int fd);
void	ft_putnbr_fd(int n, int fd);




char	*ft_strcat(char *dest, char *src);
char	*ft_strndup(char const *str, int n);


t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void    ft_lstadd_back(t_list **lst , t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));

#endif
