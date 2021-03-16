/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejeong <yejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 13:45:38 by yejeong           #+#    #+#             */
/*   Updated: 2021/03/17 00:46:57 by yejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int						ft_strlen(char *c)
{
	int i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

struct	s_stock_str		*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	int			j;
	t_stock_str	*rt;

	rt = (t_stock_str*)malloc(sizeof(t_stock_str) * ac + 1);
	if (!rt)
		return (0);
	i = -1;
	while (++i < ac)
	{
		rt[i].size = ft_strlen(av[i]);
		rt[i].str = av[i];
		rt[i].copy = malloc(sizeof(char) * ft_strlen(av[i]) + 1);
		j = 0;
		while (av[i][j])
		{
			rt[i].copy[j] = av[i][j];
			j++;
		}
		rt[i].copy[j] = 0;
	}
	rt[i].str = 0;
	return (rt);
}
