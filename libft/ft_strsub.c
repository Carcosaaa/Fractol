/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoaljayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 18:16:49 by aoaljayo          #+#    #+#             */
/*   Updated: 2016/11/16 18:16:51 by aoaljayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *str;

	if (!s)
		return (NULL);
	if ((str = (char*)ft_memalloc(len + 1)) == NULL)
		return (NULL);
	str[len] = '\0';
	str = ft_memcpy(str, s + start, len);
	return (str);
}
