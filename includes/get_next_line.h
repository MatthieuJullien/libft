/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majullie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 09:50:27 by majullie          #+#    #+#             */
/*   Updated: 2016/12/13 10:02:46 by majullie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 4
# include "libft.h"
# include <unistd.h>

typedef struct	s_fd_buf
{
	int			fd;
	char		*excess;
}				t_fd_buf;

int				get_next_line(const int fd, char **line);
int				fill_line(char **line, t_fd_buf *gnl);
int				read_fd(char **line, t_fd_buf *gnl);
int				read_excess(char **line, t_fd_buf *gnl);

#endif
