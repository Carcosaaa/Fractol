/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoaljayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 16:08:36 by aoaljayo          #+#    #+#             */
/*   Updated: 2016/11/16 16:08:39 by aoaljayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	char		*nbr;
	int			a;
	long int	tmp;

	tmp = n;
	a = 1;
	while (n /= 10)
		a++;
	a += (tmp < 0) ? 1 : 0;
	if ((nbr = ft_strnew(a)) == NULL)
		return (NULL);
	if (tmp < 0)
	{
		nbr[0] = '-';
		tmp *= -1;
	}
	if (tmp == 0)
		nbr[0] = '0';
	while (tmp)
	{
		nbr[--a] = '0' + tmp % 10;
		tmp = tmp / 10;
	}
	return (nbr);
}
