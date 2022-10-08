/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:21:07 by yabad             #+#    #+#             */
/*   Updated: 2022/10/05 13:30:44 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_remove_doublons(char const *set) //correct set
{
	char	*new_set;
	int		t[127] = {0};
	int		i;
	int		j;
	int		c;

	i = -1;
	c = 0;
	while (set[++i])
	{
		if (t[(int)set[i]] == 0)
		{
			t[(int)set[i]] = 1;
			c++;
		}
	}
	new_set = (char *)malloc(c * sizeof(char) + 1);
	i = 0;
	j = 0;
	while (i < 127)
	{
		if (t[i] == 1)
		{
			new_set[j] = (char)i;
			j++; 
		}
		i++;
	}
	new_set[j] = '\0';
	return (new_set);
}

static int	ft_n_of_char(char const *s1, char const *set) //correct
{
	int	i;
	int	j;
	int	c;

	i = 0;
	c = 0;
	set = ft_remove_doublons(set);
	while (set[i])
	{
		j = 0;
		while (s1[j])
		{
			if (set[i] == s1[j])
				c++;
			j++;
		}
		i++;
	}
	return (c);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	
}

int	main()
{
	printf("%s\n", ft_remove_doublons("yyyyya"));
}