/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoaljayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 15:58:56 by aoaljayo          #+#    #+#             */
/*   Updated: 2016/11/16 15:58:58 by aoaljayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int a;
	int nb;
	int negativ;

	negativ = 0;
	nb = 0;
	a = 0;
	while (str[a] == '\t' || str[a] == '\v' || str[a] == '\r' ||
			str[a] == '\n' || str[a] == ' ' || str[a] == '\f')
		a++;
	if (str[a] == '-')
	{
		negativ = 1;
		a++;
	}
	else if (str[a] == '+')
		a++;
	a--;
	while (str[++a] >= '0' && str[a] <= '9' && str[a])
		nb = nb * 10 + (int)str[a] - 48;
	if (negativ == 1)
		nb = -nb;
	return (nb);
}
