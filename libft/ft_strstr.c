/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoaljayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 18:16:37 by aoaljayo          #+#    #+#             */
/*   Updated: 2016/11/16 18:16:39 by aoaljayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int		a;

	a = 0;
	if (!big[a] && !little[a])
		return ((char*)big);
	while (big[a])
	{
		if (ft_memcmp(big + a, little, ft_strlen(little)) == 0)
			return ((char*)big + a);
		a++;
	}
	return (NULL);
}
