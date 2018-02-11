/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzhila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 14:17:47 by bzhila            #+#    #+#             */
/*   Updated: 2018/01/23 17:05:21 by bzhila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct			s_list
{
	void				*content;
	size_t				content_size;
	struct s_list		*next;
}						t_list;

size_t					ft_strlcat(char *dest, char const *src, unsigned int n);
void					ft_putchar(char c);
void					ft_putnbr(int n);
void					ft_putstr(char const *s);
void					ft_putendl(char const *s);
void					ft_bzero(void *s, unsigned int n);
void					*ft_memset(void *s, int c, unsigned int n);
void					*ft_memccpy(void *dest, const void *src, int c,
		unsigned int n);
void					*ft_memcpy(void *dest, const void *src, size_t n);
void					ft_putchar_fd(char c, int fd);
void					ft_putstr_fd(char const *s, int fd);
void					ft_putnbr_fd(int n, int fd);
void					ft_putendl_fd(char const *s, int fd);
void					*ft_memalloc(size_t size);
void					ft_memdel(void **ap);
void					ft_strdel(char **as);
void					ft_strclr(char *s);
void					ft_striter(char *s, void (*f)(char *));
void					ft_striteri(char *s, void (*f)(unsigned int, char *));
void					*ft_memmove(void *dest, const void *src, size_t n);
void					*ft_memchr(const void *s, int c,
		unsigned int n);
void					ft_ls_init(t_list **lst);
int						ft_ls_empty(t_list *lst);
unsigned int			ft_ls_count(t_list *lst);
void					ft_ls_add_t(t_list **new, t_list **lst);
void					ft_ls_add_p(t_list **new, t_list **lst);
void					ft_ls_add_n(t_list **new, t_list **lst, size_t n);
void					ft_ls_add_tval(void const *content,
		size_t content_size, t_list **lst);
void					ft_ls_add_pval(void const *content,
		size_t content_size, t_list **lst);
void					ft_ls_add_nval(void const *content,
		size_t content_size, t_list **lst, size_t n);
void					ft_ls_del_t(t_list **lst);
void					ft_ls_del_n(t_list **lst, size_t n);
void					ft_ls_del_p(t_list **lst);
t_list					*ft_ls_pull_t(t_list **lst);
t_list					*ft_ls_pull_p(t_list **lst);
t_list					*ft_ls_get_t(t_list *lst);
t_list					*ft_ls_get_p(t_list *lst);
void					ft_ls_del_all(t_list **lst);
t_list					*ft_lstnew(void const *content, size_t content_size);
void					ft_lstdelone(t_list **alst, void (*del)(void *,
			size_t));
void					ft_lstdel(t_list **alst, void (*del)(void *,
			size_t));
void					ft_lstadd(t_list **alst, t_list *new);
void					ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list					*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
char					*ft_strncpy(char *dest, const char *src,
		unsigned int n);
char					*ft_strcpy(char *dest, const char *src);
char					*ft_strdup(const char *s);
char					*ft_strncat(char *dest, const char *src,
		unsigned int n);
char					*ft_strcat(char *dest, const char *src);
char					*ft_strchr(const char *s, int c);
char					*ft_strrchr(const char *s, int c);
char					*ft_strstr(const char *haystack, const char *needle);
char					*ft_itoa(int n);
char					**ft_strsplit(char const *s, char c);
char					*ft_strtrim(char const *s);
char					*ft_strjoin(char const *s1, char const *s2);
char					*ft_strnew(size_t size);
char					*ft_strmap(char const *s, char (*f)(char));
char					*ft_strmapi(char const *s,
		char (*f)(unsigned int, char));
char					*ft_strsub(char const *s, unsigned int start,
		size_t len);
char					*ft_strnstr(char const *haystack, char const *needle,
		unsigned int n);
int						ft_memcmp(const void *s1, const void *s2,
		unsigned int n);
int						ft_strnequ(char const *s1, char const *s2,
		size_t n);
int						ft_strequ(char const *s1, char const *s2);
int						ft_atoi(const char *nptr);
int						ft_strncmp(const char *s1, const char *s2,
	size_t n);
int						ft_strcmp(const char *s1, const char *s2);
size_t					ft_strlen(const char *s);
int						ft_isalpha(int c);
int						ft_isdigit(int c);
int						ft_isalnum(int c);
int						ft_isascii(int c);
int						ft_isprint(int c);
int						ft_tolower(int c);
int						ft_toupper(int c);
size_t					ft_nbrlen(int n);
long long int			ft_longatoi(const char *nptr);
void					*ft_realloc(void *ptr, size_t size);
size_t					ft_replase_sumbol(char *str, char rep_sumbol,
char core_sumbol, size_t n);

#endif
