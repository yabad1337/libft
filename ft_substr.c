/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:45:24 by yabad             #+#    #+#             */
/*   Updated: 2022/10/15 09:39:21 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*allocate_substr(unsigned int start, size_t size_s, size_t len)
{
	char	*sp;

	if (start < size_s)
	{
		if (len < size_s)
			sp = (char *)malloc(len + 1);
		else
			sp = (char *)malloc(size_s - start + 1);
	}
	else
		sp = (char *)malloc(1);
	return (sp);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sp;
	int		i;
	size_t	size_s;

	if (!s)
		return (NULL);
	size_s = ft_strlen(s);
	sp = allocate_substr(start, size_s, len);
	i = 0;
	if (!sp)
		return (NULL);
	if (start <= size_s)
	{
		while (start < size_s && len)
		{
			sp[i] = s[start];
			i++;
			start++;
			len--;
		}
	}
	sp[i] = '\0';
	return (sp);
}

// int main()
// {
// 	char *str = "i just want this part #############";
//     size_t size = 10;
// 	printf("%s\n", ft_substr(str, 5, size));
// }