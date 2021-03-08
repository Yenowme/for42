/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_board.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejeong <yejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 16:39:47 by yejeong           #+#    #+#             */
/*   Updated: 2021/03/06 18:52:31 by yejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

extern int g_r_check[5][5];
extern int g_c_check[5][5];
extern int g_table[5][5];
extern int g_input[16];
extern int *g_edge_ptr[4];
extern int g_mv[4][2];


int	put_table_sub(int r, int c)
{
	int box;

	box = 0;
	while (++box < 5)
	{
		if (g_r_check[r][box] || g_c_check[c][box])
			continue ;
		g_r_check[r][box] = 1;
		g_c_check[c][box] = 1;
		g_table[r][c] = box;
		if (put_table(r, c + 1))
			return (1);
		g_r_check[r][box] = 0;
		g_c_check[c][box] = 0;
	}
	return (0);
}

int	put_table(int r, int c)
{
	if (r == 5)
	{
		if (valid_table())
		{
			print_table();
			return (1);
		}
		return (0);
	}
	if (c == 5)
		return (put_table(r + 1, 1));
	else
		return (put_table_sub(r, c));
}
