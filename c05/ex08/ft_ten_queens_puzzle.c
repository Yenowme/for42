/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejeong <yejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 13:34:24 by yejeong           #+#    #+#             */
/*   Updated: 2021/03/03 15:48:34 by yejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	promising(int level, char *q)
{
	int i;
	int diff;

	i = 0;
	while (i < level)
	{
		diff = q[level] - q[i];
		if (diff < 0)
			diff *= -1;
		if (q[level] == q[i])
			return (0);
		else if (level - i == diff)
			return (0);
		i++;
	}
	return (1);
}

int	ten_queen(int level, char *q, int *rt)
{
	int i;

	i = 0;
	if (!promising(level, q))
		return (0);
	else if (level == 9)
	{
		write(1, q, 10);
		write(1, "\n", 1);
		return (1);
	}
	while (i <= 9)
	{
		q[level + 1] = i + '0';
		if (ten_queen(level + 1, q, rt))
			(*rt)++;
		i++;
	}
	return (0);
}

int	ft_ten_queens_puzzle(void)
{
	char	q[10];
	int		rt;
	int		i;

	rt = 0;
	i = 0;
	while (i <= 9)
	{
		q[0] = '0' + i;
		ten_queen(0, q, &rt);
		i++;
	}
	return (rt);
}
