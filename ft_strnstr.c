/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 10:30:30 by yabad             #+#    #+#             */
/*   Updated: 2022/10/06 10:50:14 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	match(const char *str, const char *needle, int p)
{
	int	i;

	i = 0;
	while (needle[i])
	{
		if (str[p + i] != needle[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	m;

	i = 0;
	while (haystack[i] && i < len)
	{
		m = match(haystack, needle, i);
		if (m == 1)
			return ((char *)haystack + i);
		i++;
	}
	if (needle[0] == '\0')
		return ((char *)haystack);
	return (0);
}


// int	main()
// {
// 	char haystack[30] = "aaabcabcd";
// 	//char needle[10] = "aabc";

// 	printf("%s\n", ft_strnstr(haystack, "cd", 8));
// 	printf("%s\n", strnstr(haystack, "cd", 8));
// }