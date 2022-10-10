/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 08:46:07 by yabad             #+#    #+#             */
/*   Updated: 2022/10/10 19:10:47 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*s1p;
	char	*s2p;

	i = 0;
	s1p = (char *)s1;
	s2p = (char *)s2;
	if (n == 0)
		return (0);
	while (s1p[i] == s2p[i] && i < n - 1)
		i++;
	return ((unsigned char)s1p[i] - (unsigned char)s2p[i]);
}

// line 26 i starts with 0 and n starts with 1
// int	main()
// {
// 	// char s[] = {-128, 0, 127, 0};
// 	// char sCpy[] = {-128, 0, 127, 0};
// 	//char s2[] = {0, 0, 127, 0};
// 	//char s3[] = {0, 0, 42, 0};
// 	// /* 2 */ check(!ft_memcmp(s, s2, 0)); showLeaks();

// 	// printf("memcmp : %d\n", memcmp(s2, s3, 4));
// 	// printf("ft_memcmp : %d\n", ft_memcmp(s2, s3, 4));
// 	printf("memcmp : %d\n", memcmp("a", "ayhay", 4));
// 	printf("ft_memcmp : %d\n", ft_memcmp("a", "ayhay", 4));
// }