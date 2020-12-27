
#ifndef LIBFT_H
# define LIBFT_H

void	*ft_memset(void *str, int c, int n);
void	*ft_bzero(void *str, int n);
void	*ft_memcpy(void *dest, const void *src, int n);
void	*ft_memccpy(void *dest, const void *src, int c, int n);


void	*ft_memchr(const void *str, int c, int n);
int		ft_memcmp(const void *str1, const void *str2, int n);
int		ft_strlen(char *str);





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





char	*ft_strcat(char *dest, char *src);
char	*ft_strndup(char const *str, int n);
#endif
