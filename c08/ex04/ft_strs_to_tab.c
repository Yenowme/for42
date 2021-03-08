/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejeong <yejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 13:45:38 by yejeong           #+#    #+#             */
/*   Updated: 2021/03/08 18:44:05 by yejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int			*set_m_size(int ac, char **av)
{
	int i;
	int j;
	int *m_size;

	m_size = (int *)malloc(sizeof(int) * ac);
	i = -1;
	while (++i < ac)
	{
		j = -1;
		while (av[i][++j])
			m_size[i]++;
	}
	return (m_size);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	int			j;
	int			*m_size;
	t_stock_str	*rt;

	rt = (t_stock_str*)malloc(sizeof(t_stock_str) * ac + 1);
	if (!rt)
		return (0);
	m_size = set_m_size(ac, av);
	i = -1;
	while (++i < ac)
	{
		j = -1;
		rt[i].str = av[i];
		rt[i].copy = malloc(sizeof(char) * m_size[i]);
		rt[i].size = m_size[i];
		while (++j < m_size[i])
			rt[i].copy[j] = av[i][j];
	}
	rt[i].str = 0;
	return (rt);
}
