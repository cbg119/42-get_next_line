/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 12:14:42 by cbagdon           #+#    #+#             */
/*   Updated: 2019/02/19 17:40:45 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 2

# define CHECK(x) if (x) return (-1)
# define BREAK(x) if (x) break

# include <sys/types.h>
# include <sys/stat.h>
# include <unistd.h>
# include <fcntl.h>
# include "libft/libft.h"

int		get_next_line(const int fd, char **line);

#endif
