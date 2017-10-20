/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoaljayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 23:20:06 by aoaljayo          #+#    #+#             */
/*   Updated: 2016/11/27 23:20:09 by aoaljayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_free(char *s1, char const *s2)
{
	char	*str;
	int		k;
	int		i;
	int		j;

	k = -1;
	i = 0;
	j = 0;
	if (s1 != NULL)
		i = ft_strlen(s1);
	if (s2 != NULL)
		j = ft_strlen(s2);
	if ((str = malloc(sizeof(*str) * (i + j + 1))) == 0)
		return (NULL);
	while (++k < i)
		str[k] = s1[k];
	while (k < (i + j))
	{
		str[k] = s2[k - i];
		k++;
	}
	str[k] = 0;
	if (s1)
		free(s1);
	return (str);
}
