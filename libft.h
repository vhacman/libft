//header

#ifndef LIBFT_H //controlla se il macro non è definito. cioè non incluso prima
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

// Funzioni di base per la manipolazione della memoria
void    ft_bzero(void *s, size_t n);
void    *ft_memset(void *b, int c, size_t count);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);

// Funzioni per l'output
void    ft_putchar(char c);
void    ft_putstr(char *s);
void    ft_putnbr(int n);

// Funzioni per la manipolazione di stringhe

// Copia
char    *ft_strcpy(char *dst, const char *src);
char    *ft_strncpy(char *dest, char *src, unsigned int n);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
char	*ft_strdup(const char *s1);

// Concatenazione
char    *ft_strcat(char *s1, const char *s2);
char    *ft_strncat(char *dest, char *src, unsigned int nb);
unsigned int    ft_strlcat(char *dest, const char *src, unsigned int size);

// Confronto
int     ft_strcmp(const char *s1, const char *s2);
int     ft_strncmp(const char *s1, const char *s2, size_t n);

// Ricerca
char    *ft_strstr(char *str, char *to_find);

// Misurazione
int     ft_strlen(const char *str);

// Funzione di conversione
int     ft_atoi(const char *str);