/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:23:29 by yabad             #+#    #+#             */
/*   Updated: 2022/10/10 19:09:46 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*sp;
	size_t			i;

	sp = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (sp[i] == (unsigned char)c)
			return ((unsigned char *)sp + i);
		i++;
	}
	return (NULL);
}

// int	main()
// {
// 	char *src = "/|\x12\xff\x09\x42\2002\42|\\";
//     int size = 10;
// 	printf("%s\n", ft_memchr(src, '\200', size));
// }