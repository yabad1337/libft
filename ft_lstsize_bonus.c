/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:46:41 by yabad             #+#    #+#             */
/*   Updated: 2022/11/10 11:26:33 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;

	i = 0;
	while (lst != NULL && ++i)
		lst = lst->next;
	return (i);
}
/*
	INPUT: 	t_list	*lst 	---> (list, !list)
	in worst case there nothing to protect since 
	it will return 0 which means theres no list to count from
*/