/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 11:18:35 by tngwenya          #+#    #+#             */
/*   Updated: 2018/07/02 11:16:14 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <fcntl.h>
# include "libft/libft.h"
# define BUFF_SIZE 100

int		get_next_line(const int fd, char **line);

#endif
