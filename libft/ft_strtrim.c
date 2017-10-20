/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoaljayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 18:17:07 by aoaljayo          #+#    #+#             */
/*   Updated: 2016/11/16 18:17:08 by aoaljayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	int		a;
	int		b;
	char	*str;

	if (!s)
		return (NULL);
	a = 0;
	b = (int)ft_strlen(s) - 1;
	if (b != 0)
	{
		while (s[a] == '\t' || s[a] == ' ' || s[a] == '\n')
			a++;
		while (s[b] == '\t' || s[b] == ' ' || s[b] == '\n')
			b--;
		if (s[a] != '\0')
		{
			if (!(str = (char*)ft_memalloc(sizeof(char) * b - a + 2)))
				return (NULL);
			str = ft_memcpy(str, s + a, b - a + 1);
			return (str);
		}
	}
	if ((str = (char*)ft_memalloc(sizeof(char) * 1)) == NULL)
		return (NULL);
	return (str);
}
