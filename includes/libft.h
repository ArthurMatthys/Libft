/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libft.h                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amatthys <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 13:26:54 by amatthys     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 09:53:52 by amatthys    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_matrix
{
	int				**tab;
	size_t			nbrline;
	size_t			nbrcol;
}					t_matrix;

void				ft_bzero(void *s, size_t n);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_memdel(void **ap);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_putnbr(int c);
void				ft_freetab(char **tab);
int					ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *ne);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memset(void *b, int c, size_t len);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memalloc(size_t size);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
long long			ft_atoi(const char *nptr);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
int					ft_isprint(int c);
int					ft_isascii(int c);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
int					is_in(int t, int *tab, size_t len);
size_t				ft_strlcat(char *dst, const char *src, size_t n);
size_t				ft_strlen(char *str);
size_t				ft_tablen(char **tab);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strdup(const char *s1);
char				*ft_strncat(char *dest, const char *src, size_t n);
char				*ft_strncpy(char *dest, const char *src, size_t n);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strnstr(const char *big, const char *little,
					size_t len);
char				*ft_strnew(size_t size);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char(*f)(unsigned int, char));
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				*ft_itoa(int c);
char				*ft_strrev(char *str);
char				**ft_strsplit(char const *s, char c);
t_list				*ft_lstnew(void const *content, size_t content_size);
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

int					ft_pow_int(int c, size_t n);
size_t				ft_countwords(char const *s, char c);
t_matrix			ft_creatematrix(size_t line, size_t col, int val);
t_matrix			ft_initmatrix(int **tab, size_t line, size_t col);
t_matrix			ft_idmatrix(size_t line);
void				ft_printmatrix(t_matrix a);
t_matrix			ft_addmatrix(t_matrix a, t_matrix b);
t_matrix			ft_prodmatrix(t_matrix a, t_matrix b);
t_matrix			ft_powmatrix(t_matrix a, size_t n);
t_matrix			ft_prodmatrix_int(t_matrix a, int c);
int					ft_tracematrix(t_matrix a);
t_matrix			ft_tmatrix(t_matrix a);
t_matrix			ft_dvpmatrix(t_matrix a, size_t line, size_t col);
int					ft_dvpdet(t_matrix a);
int					ft_detmatrix(t_matrix a);
t_matrix			ft_commatrix(t_matrix a);

#endif
