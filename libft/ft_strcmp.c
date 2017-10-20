/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoaljayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 16:52:16 by aoaljayo          #+#    #+#             */
/*   Updated: 2016/11/16 16:52:17 by aoaljayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int a;

	a = 0;
	while (s1[a] == s2[a] && s1[a] && s2[a])
		a++;
	return ((unsigned char)s1[a] - (unsigned char)s2[a]);
}
