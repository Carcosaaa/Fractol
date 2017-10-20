/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstputendl.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoaljayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 16:48:23 by aoaljayo          #+#    #+#             */
/*   Updated: 2016/11/16 16:48:25 by aoaljayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstputendl(t_list *lst)
{
	while (lst)
	{
		ft_putendl((char*)lst->content);
		lst = lst->next;
	}
}
