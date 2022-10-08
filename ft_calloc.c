/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:38:35 by yabad             #+#    #+#             */
/*   Updated: 2022/10/06 14:54:40 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (size >= SIZE_MAX)
		return (NULL);
	ptr = (void *)malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size * count);
	return (ptr);
}

// int	main()
// {
// 	char	*l;
// 	int		i;

// 	l = (char *)malloc(6);
// 	i = 0;
// 	// Remlissage
// 	while (i < 6)
// 	{
// 		l[i] = '9';
// 		i++;
// 	}
// 	// Affichage
// 	i = 0;
// 	printf("Before calloc : \n");
// 	while (i < 6)
// 	{
// 		printf("l[%d] = %c\n", i, l[i]);
// 		i++;
// 	}
// 	l = ft_calloc(3, 1);
// 	i = 0;
// 	// After Calloc
// 	printf("After calloc : \n");
// 	while (i < 6)
// 	{
// 		printf("l[%d] = %c\n", i, l[i]);
// 		i++;
// 	}
// }