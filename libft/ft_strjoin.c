/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoaljayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 16:53:40 by aoaljayo          #+#    #+#             */
/*   Updated: 2016/11/16 16:53:42 by aoaljayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *str;

	if (!s1 || !s2)
		return (NULL);
	if ((str = ft_strnew(ft_strlen(s1) + ft_strlen(s2))) == NULL)
		return (NULL);
	str = ft_strcpy(str, s1);
	str = ft_strcat(str, s2);
	return (str);
}
