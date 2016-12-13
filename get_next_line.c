/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majullie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 09:48:01 by majullie          #+#    #+#             */
/*   Updated: 2016/12/13 10:02:54 by majullie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdlib.h>

int		get_next_line(const int fd, char **line)
{
	static t_llist	*list = NULL;
	t_llnode		*cur;
	t_fd_buf		*gnl;

	if (line == NULL)
		return (-1);
	if (list == NULL)
		ft_llist_create(&list);
	cur = list->first;
	while (cur != NULL && ((t_fd_buf *)cur->val)->fd != fd)
		cur = cur->next;
	if (cur != NULL)
		return (fill_line(line, cur->val));
	if ((gnl = ft_memalloc(sizeof(t_fd_buf))))
		gnl->excess = ft_strnew(0);
	if (!gnl || !gnl->excess)
		return (-1);
	gnl->fd = fd;
	ft_llist_add_first(list, gnl, sizeof(t_fd_buf));
	free(gnl);
	return (fill_line(line, list->first->val));
}

int		fill_line(char **line, t_fd_buf *gnl)
{
	int				res;

	*line = ft_strnew(0);
	while (1)
	{
		if (gnl->excess[0] == '\0')
		{
			if ((res = read_fd(line, gnl)) < 2)
				return (res);
		}
		else
		{
			if ((res = read_excess(line, gnl)) < 2)
				return (res);
		}
	}
}

int		read_fd(char **line, t_fd_buf *gnl)
{
	int			ret;
	char		buf[BUFF_SIZE + 1];
	int			i;

	if ((ret = read(gnl->fd, buf, BUFF_SIZE)) <= 0)
	{
		if (ret == 0 && *line[0] != '\0')
			return (1);
		return (ret);
	}
	i = -1;
	while (++i < ret)
	{
		if (buf[i] == '\n')
		{
			buf[i] = '\0';
			ft_stradd(line, buf);
			free(gnl->excess);
			gnl->excess = ft_strsub(buf, i + 1, ret - i - 1);
			return (1);
		}
	}
	buf[i] = '\0';
	ft_stradd(line, buf);
	return (2);
}

int		read_excess(char **line, t_fd_buf *gnl)
{
	int		i;
	int		excess_len;

	excess_len = ft_strlen(gnl->excess);
	i = 0;
	while (gnl->excess[i] != '\0')
	{
		if (gnl->excess[i] == '\n')
		{
			gnl->excess[i] = '\0';
			ft_stradd(line, gnl->excess);
			ft_strredux(&gnl->excess, i + 1, excess_len - i - 1);
			return (1);
		}
		i++;
	}
	ft_stradd(line, gnl->excess);
	ft_strclr(gnl->excess);
	return (2);
}
