/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:30:25 by yabad             #+#    #+#             */
/*   Updated: 2022/10/06 17:57:26 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	ls;

	i = 0;
	ls = ft_strlen(s);
	while (i <= ls)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}

// int	main()
// {
// 	printf("%s\n", strchr("yahya", 0));
// 	printf("%s\n", ft_strchr("yahya", 0));
// }