/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 21:45:00 by yabad             #+#    #+#             */
/*   Updated: 2022/10/05 09:19:19 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

// int	main()
// {
// 	int	fd;

// 	fd = open("./file2.txt", O_CREAT | O_RDWR, S_IREAD | S_IWRITE);
// 	ft_putendl_fd("yabad was here", fd);
//	close(fd);
// }