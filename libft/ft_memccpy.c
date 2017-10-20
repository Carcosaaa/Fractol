/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoaljayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 16:48:58 by aoaljayo          #+#    #+#             */
/*   Updated: 2016/11/16 16:48:59 by aoaljayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t len)
{
	char *t_dst;
	char *t_src;

	t_src = (char*)src;
	t_dst = (char*)dst;
	while (len > 0 && *t_src != c)
	{
		len--;
		*t_dst++ = *t_src++;
	}
	if (len > 0)
	{
		*t_dst++ = *t_src++;
		return ((void*)t_dst);
	}
	else
		return (NULL);
}
