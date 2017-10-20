/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoaljayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 18:09:38 by aoaljayo          #+#    #+#             */
/*   Updated: 2016/11/16 18:09:57 by aoaljayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char *str;

	if ((str = (char*)ft_memalloc(sizeof(char) * n + 1)) == NULL)
		return (NULL);
	str = (char*)ft_memcpy(str, s1, n);
	return (str);
}
