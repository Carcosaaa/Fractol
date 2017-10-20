/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoaljayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 16:52:40 by aoaljayo          #+#    #+#             */
/*   Updated: 2016/11/16 16:52:41 by aoaljayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *str;

	if ((str = (char*)ft_memalloc(sizeof(char) * ft_strlen(s1) + 1)) == NULL)
		return (NULL);
	str = (char*)ft_memcpy(str, s1, ft_strlen(s1) + 1);
	return (str);
}
