/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 16:42:39 by seungsle          #+#    #+#             */
/*   Updated: 2021/03/06 19:04:49 by yejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int g_table[5][5];
int g_r_check[5][5];
int g_c_check[5][5];
int g_input[16];
int *g_edge_ptr[4];
int g_mv[4][2];

void	print_table(void)
{
	int r;
	int c;

	r = 0;
	while (++r <= 4)
	{
		c = 0;
		while (++c < 4)
		{
			ft_putchar('0' + g_table[r][c]);
			ft_putchar(' ');
		}
		ft_putchar('0' + g_table[r][c]);
		ft_putchar('\n');
	}
}

void	init(void)
{
	int i;
	int j;

	i = 0;
	while (++i < 5)
	{
		j = 0;
		while (++j < 5)
		{
			g_r_check[i][j] = 0;
			g_c_check[i][j] = 0;
		}
	}
	g_edge_ptr[0] = &g_table[1][1];
	g_edge_ptr[1] = &g_table[4][1];
	g_edge_ptr[2] = &g_table[1][1];
	g_edge_ptr[3] = &g_table[1][4];
	g_mv[0][0] = 5;
	g_mv[0][1] = 1;
	g_mv[1][0] = -5;
	g_mv[1][1] = 1;
	g_mv[2][0] = 1;
	g_mv[2][1] = 5;
	g_mv[3][0] = -1;
	g_mv[3][1] = 5;
}

int		rush(void)
{
	init();
	return(put_table(1, 1));
}
