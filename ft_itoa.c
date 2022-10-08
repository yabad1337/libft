/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:25:17 by yabad             #+#    #+#             */
/*   Updated: 2022/10/06 12:15:05 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_toallocate(int n)
{
	int				c;
	int				sign;
	unsigned int	np;

	c = 1;
	sign = 0;
	if (n < 0)
	{
		sign = 1;
		np = n * -1;
	}
	else
		np = n;
	if (np < 10)
		c = 1;
	while (np >= 10 && ++c)
		np = np / 10;
	return (c + sign + 1);
}

static int	num_todivide(int n, int a)
{
	int	dv;

	dv = 1;
	if (n < 0)
		a = a - 3;
	else
		a = a - 2;
	while (a)
	{
		dv *= 10;
		a--;
	}
	return (dv);
}

static void	remp_tab(char	*tab, unsigned int np, int a, int i)
{
	while (np != 0)
	{
		tab[i++] = np / a + '0';
		np = np % a;
		a = a / 10;
	}
	tab[i] = '\0';
}

char	*ft_itoa(int n)
{
	char			*tab;
	unsigned int	np;
	int				a;
	int				i;

	a = num_toallocate(n);
	i = 0;
	tab = (char *)malloc(a * sizeof(char));
	if (!tab)
		return (NULL);
	if (n == 0)
		tab[i++] = 0 + '0';
	if (n < 0)
	{
		tab[i++] = '-';
		np = n * -1;
	}
	else
		np = n;
	a = num_todivide(n, a);
	remp_tab(tab, np, a, i);
	return (tab);
}

// int	main()
// {
// 	printf("%s\n", ft_itoa(-1234));
// }