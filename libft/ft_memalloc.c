/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgato <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 08:52:11 by fmakgato          #+#    #+#             */
/*   Updated: 2018/05/28 09:21:53 by fmakgato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *t;
	char *c;

	t = malloc(size);
	c = t;
	if (t)
	{
		while (size != 0)
		{
			*c++ = 0;
			size--;
		}
		return (t);
	}
	else
	{
		return (NULL);
	}
}
