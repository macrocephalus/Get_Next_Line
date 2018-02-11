/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzhila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 16:39:51 by bzhila            #+#    #+#             */
/*   Updated: 2018/01/22 16:40:01 by bzhila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "get_next_line.h"

static		void	free_list(t_list **list, t_list **lst)
{
	t_list				*lst_new;
	t_list				*list_new;
	int					i;

	list_new = *list;
	lst_new = *lst;
	i = 0;
	while (lst_new)
	{
		if (lst_new == list_new)
		{
			ft_ls_del_n(lst, i);
			*list = NULL;
			return ;
		}
		++i;
		lst_new = lst_new->next;
	}
}

static		void	rewrite_buff(char **struk, char **line)
{
	char		*cursor;
	int			len;
	char		*temp;

	cursor = NULL;
	if ((cursor = ft_strchr(*struk, '\n')) != NULL)
	{
		len = cursor - (*struk);
		if (len == 0)
			*line = ft_strnew(1);
		else
			*line = ft_strsub(*struk, 0, len);
		temp = ft_strdup(cursor + 1);
		ft_strdel(struk);
		*struk = temp;
	}
	else
	{
		*line = ft_strdup(*struk);
		ft_strdel(struk);
		*struk = ft_strnew(1);
	}
}

static		int		read_swap(const int fd, char **struk,
char **line, int *ret1)
{
	char		*temp;
	char		*ch;

	temp = NULL;
	ch = NULL;
	ch = ft_strnew(BUFF_SIZE + 1);
	ft_bzero(ch, (BUFF_SIZE + 1) * sizeof(char));
	while ((*ret1 = read(fd, ch, BUFF_SIZE)) > 0)
	{
		ft_replase_sumbol(ch, '\n', '\0', (size_t)(*ret1));
		temp = ft_strjoin(*struk, ch);
		ft_strdel(struk);
		*struk = temp;
		if ((ft_strchr(ch, '\n') != NULL))
		{
			ft_strdel(&ch);
			rewrite_buff(struk, line);
			return (1);
		}
		else
			ft_bzero(ch, (BUFF_SIZE) * sizeof(char));
	}
	ft_strdel(&ch);
	return (0);
}

static		int		read_line(const int fd, char **struk, char **line)
{
	int			ret;

	if (ft_strchr(*struk, '\n') != NULL)
	{
		rewrite_buff(struk, line);
		return (1);
	}
	if (read_swap(fd, struk, line, &ret) == 1)
	{
		return (1);
	}
	if (ret == 0 && ft_strlen(*struk) > 0)
	{
		rewrite_buff(struk, line);
		return (1);
	}
	return (ret);
}

int					get_next_line(const int fd, char **line)
{
	static	t_list		*lst;
	t_list				*list;
	int					err;

	list = lst;
	if (fd < 0 || !line || BUFF_SIZE == 0)
		return (-1);
	while (list && list->content_size != (size_t)fd)
		list = list->next;
	if (!list)
	{
		list = ft_memalloc(sizeof(t_list));
		list->content = ft_strnew(BUFF_SIZE);
		list->content_size = (size_t)fd;
		list->next = NULL;
		ft_lstadd(&lst, list);
	}
	if ((err = read_line(fd, (char **)(&(list->content)), line)) <= 0)
	{
		free_list(&list, &lst);
		return (err);
	}
	else
		return (1);
}
