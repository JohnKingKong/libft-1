#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>

size_t  ft_strlen(char *str);
void    ft_putchar(char c);
void    ft_putstr(char *str);
void    ft_bzero(void *s, size_t n);
void	*ft_memset(void *str, int c, size_t len);
void  	*ft_memcpy(void *dst, const void *src, size_t n);
void  	*ft_memmove(void *dst, const void *src, size_t len);
int     ft_atoi(char *str);
int     ft_isascii(char c);
int     ft_isprint(char c);
int     ft_isdigit(int c);
int     ft_isalpha(int c);
int	    ft_isalnum(int c);
int     ft_toupper(int c);
int     ft_tolower(int c);
int     ft_strncmp(const char *s1, const char *s2, size_t n);

#endif

