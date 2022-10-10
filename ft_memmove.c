/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:06:25 by yabad             #+#    #+#             */
/*   Updated: 2022/10/10 10:01:51 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*srcp;
	char	*dstp;

	srcp = (char *)src;
	dstp = (char *)dst;
	if (srcp < dstp)
	{
		while (len--)
			dstp[len] = srcp[len];
	}
	else
		ft_memcpy(dstp, srcp, len);
	return (dst);
}

// int	main()
// {
// 	char l[] = "Start stop";

// 	printf("%s\n", ft_memmove(l + 2, l, 4)); //OVERLAP LOSS OF DATA
// 	//printf("%s\n", memmove(l, l + 2, 4)); //OVERLAP  NO LOSS OF DATA
// }