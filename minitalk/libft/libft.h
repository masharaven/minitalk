#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h> 
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <signal.h>

typedef struct s_fl
{
    int     size;
    char    c;
}   t_fl;

size_t	ft_strlen(const char *s);
int		ft_atoi(const char *g);
char	*ft_itoa(int nb);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
size_t	ft_strlcat(char *dst, const char *src, size_t count);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
int		ft_strncmp(const char *s1, const char *s2, int n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	*ft_memcpy (void *dest, const void *src, size_t n);
void	*ft_memccpy (void *dest, const void *src, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t count);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memset(void *dest, int c, size_t num);
void	ft_bzero(void *s, size_t n);
char	*ft_strchr (const char *str, int ch);
char	*strrchr (const char *str, int ch);
char	*ft_strdup(const char *str);
void	*ft_calloc (size_t numb, size_t size);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif