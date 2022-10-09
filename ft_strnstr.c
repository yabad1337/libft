/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 10:30:30 by yabad             #+#    #+#             */
/*   Updated: 2022/10/09 16:53:18 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!haystack && n == 0)
		return (NULL);
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < n)
	{
		if (!(haystack[i] == needle[j]))
			i++;
		else
		{
			if (needle[j + 1] && haystack[i + 1] == needle[j + 1])
			{
				j++;
				i++;
			}
			else if (needle[j + 1] && haystack[i + 1] != needle[j + 1])
			{
				i = i - (j - 1);
				j = 0;
			}
			else
				return ((char *)haystack + (i - j));
		}
	}
	return (NULL);
}

// int main()
// {
//     char 	s1[10] = "aaaabcabcd";
// 	char 	s2[10] = "aaabc";
// 	size_t	n = 9;
 
//     printf("%s#\n", ft_strnstr(s1, s2, n));
//     printf("%s#\n", strnstr(s1, s2, n));
//     return (0);
// }