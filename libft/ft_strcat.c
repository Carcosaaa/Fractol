/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoaljayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 16:51:47 by aoaljayo          #+#    #+#             */
/*   Updated: 2016/11/16 16:51:49 by aoaljayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t len_s1;
	size_t a;

	a = -1;
	len_s1 = ft_strlen(s1);
	while (s2[++a])
		s1[len_s1 + a] = s2[a];
	s1[len_s1 + a] = '\0';
	return (s1);
}