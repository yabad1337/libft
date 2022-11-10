/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:24:49 by yabad             #+#    #+#             */
/*   Updated: 2022/11/10 12:56:08 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (del && lst)
	{
		del(lst->content);
		free(lst);
	}
}
/*
	INPUT: 	t_list	*lst 	---> (List, NULL)
			void (*del)		---> (exist, !exist)
	the function to delete has to be present
	and the node has to be present so we can delete it
	otherwise function exit
	//After freing the first element of a node, \
			if you tried to access the 2nd element
			it should segfault.
	in school iMac : 	no segfault, you can access and \
						modify the memory after free(WEIRD)
	in debian : 	SEGFAULT
	in mac air : 	SEGFAULT
*/