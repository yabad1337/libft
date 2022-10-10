/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:27:14 by yabad             #+#    #+#             */
/*   Updated: 2022/10/10 19:45:05 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;
	int	ls;

	if (!s)
		return ;
	i = -1;
	ls = ft_strlen(s);
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