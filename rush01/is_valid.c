/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejeong <yejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 18:32:32 by yejeong           #+#    #+#             */
/*   Updated: 2021/03/06 18:37:32 by yejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

extern int g_table[5][5];
extern int g_r_check[5][5];
extern int g_c_check[5][5];
extern int g_input[16];
extern int *g_edge_ptr[4];
extern int g_mv[4][2];

int	valid_table_sub(int *ptr, int mv, int input)
{
	int i;
	int cnt_box;
	int max;

	i = 0;
	cnt_box = 0;
	max = 0;
	while (++i < 5)
	{
		if (*ptr > max)
		{
			max = *ptr;
			++cnt_box;
		}
		ptr += mv;
	}
	return (cnt_box == input);
}

int	valid_table(void)
{
	int k;
	int i;
	int j;
	int *ptr;
	
	k = 0;
	i = 0;
	while (i < 4)
	{
		j = 0;
		ptr = g_edge_ptr[i];
		while (j < 4)
		{
			if (!valid_table_sub(ptr, g_mv[i][0], g_input[k++]))
				return (0);
			ptr += g_mv[i][1];
			++j;
		}
		++i;
	}
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	white_space(char c)
{
	return ((c >= 9 && c <= 13) || c == ' ');
}

int	valid_input(char *input)
{
	int cnt;

	cnt = 0;
	while (*input)
	{
		while (*input && white_space(*input))
			++input;
		if (*input)
		{
			if (*input >= '1'&& *input <= '4')
			{
				if (cnt == 16 || (*(input + 1) && !white_space(*(input + 1))))
					return (0);
				g_input[cnt] = *input - '0';
				cnt++;
			}
			else
				return (0);
			++input;
		}
	}
	return (cnt == 16);
}
