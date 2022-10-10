/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:21:07 by yabad             #+#    #+#             */
/*   Updated: 2022/10/10 19:44:33 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	if_exist(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	positions(char const *s1, char const *set, int *r, int *l)
{
	*r = 0;
	*l = (int)ft_strlen(s1) - 1;
	while (if_exist(s1[(*r)], set))
		(*r)++;
	while (if_exist(s1[(*l)], set))
		(*l)--;
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	r;
	int	l;

	if (!s1)
		return (NULL);
	r = 0;
	l = 0;
	positions(s1, set, &r, &l);
	return (ft_substr(s1, r, l - r + 1));
}

// int	main()
// {
// 	ft_strtrim("nbnlolobnbtonbn", "nbn");
// }