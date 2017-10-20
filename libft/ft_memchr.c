/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoaljayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 16:49:08 by aoaljayo          #+#    #+#             */
/*   Updated: 2016/11/16 16:49:10 by aoaljayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmp;
	int				a;

	a = -1;
	tmp = (unsigned char *)s;
	while (n--)
		if (tmp[++a] == (unsigned char)c)
			return ((void *)s + a);
	return (NULL);
}
