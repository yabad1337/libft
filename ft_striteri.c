/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:27:14 by yabad             #+#    #+#             */
/*   Updated: 2022/10/15 12:49:48 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!s || !f)
		return ;
	i = -1;
	while (s[++i])
		f(i, &s[i]);
}

// void	finito(unsigned int index, char	*ptr)
// {
// 	if (index || index == 0)
// 		*ptr = *ptr - 1;
// }

// int	main()
// {
// 	char	l[] = "yahya";
// 	printf("before call : %s\n", l);
// 	ft_striteri(l, finito);
// 	printf("After call : %s\n", l);
// }