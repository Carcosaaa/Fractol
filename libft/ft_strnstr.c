/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoaljayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 18:11:01 by aoaljayo          #+#    #+#             */
/*   Updated: 2016/11/16 18:28:20 by aoaljayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	size_t	j;

	i = 0;
	if (!little[i])
		return ((char *)big);
	j = ft_strlen(little);
	while (big[i] && len >= j)
	{
		if (ft_strncmp(big + i, little, j) == 0)
			return ((char *)big + i);
		i++;
		len--;
	}
	return (NULL);
}
