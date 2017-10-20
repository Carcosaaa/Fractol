/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoaljayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 16:54:16 by aoaljayo          #+#    #+#             */
/*   Updated: 2016/11/16 16:54:17 by aoaljayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		a;

	if (s && f)
	{
		a = ft_strlen(s);
		if ((str = ft_memalloc(a + 1)) == NULL)
			return (NULL);
		str[a] = '\0';
		a = -1;
		while (s[++a])
			str[a] = f(a, s[a]);
		return (str);
	}
	return (NULL);
}
